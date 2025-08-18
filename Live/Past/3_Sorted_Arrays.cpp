#include <stdio.h>

int main() {
    int sizeA, sizeB, sizeC;
    scanf("%d", &sizeA);

    int a[100005], b[100005], c[100005], prefixCount[100005];

    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &sizeB);
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &b[i]);
    }

    scanf("%d", &sizeC);
    for (int i = 0; i < sizeC; i++) {
        scanf("%d", &c[i]);
    }

    int ptrA = 0;
    for (int i = 0; i < sizeB; i++) {
        while (ptrA < sizeA && ptrA <= i && b[i] >= a[ptrA]) {
            ptrA++;
        }
        prefixCount[i] = ptrA;
    }

    int ptrB = 0;
    long long cumulative = 0, total = 0;
    for (int i = 0; i < sizeC; i++) {
        while (ptrB < sizeB && ptrB <= i && b[ptrB] <= c[i]) {
            cumulative += prefixCount[ptrB];
            ptrB++;
        }
        total += cumulative;
    }

    printf("%lld\n", total);

    return 0;
}
