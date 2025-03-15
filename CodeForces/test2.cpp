// LCS2023040 | Hitarth Singh Rajput
#include <iostream>
#include <bitset>
using namespace std;
bool calculateParityBit(bitset<7>& data, bool evenParity) {
    int count = data.count(); // Count the number of 1s in the bitset
    return evenParity ? (count % 2 != 0) : (count % 2 == 0);
}

bool hasParityError(bitset<8>& data, bool evenParity) {
    int count = data.count(); 
    return evenParity ? (count % 2 != 0) : (count % 2 == 0);
}

int main() {
    bitset<7> data("1011010");

    bool evenParity = true;

    bool parityBit = calculateParityBit(data, evenParity);
    bitset<8> transmittedData(data.to_ulong() << 1); // Shifting data left to make space for the parity bit
    transmittedData[0] = parityBit;

    cout << "Transmitted data with parity bit: " << transmittedData << endl;

    // Simulate receiving the data (with or without error)
    bitset<8> receivedData = transmittedData;
    // Introduce an error (flip one bit)
    receivedData.flip(2);

    // Check for parity error
    if (hasParityError(receivedData, evenParity)) {
        cout << "Parity error detected in received data!" << endl;
    } else {
        cout << "No parity error detected in received data." << endl;
    }

    return 0;
}
