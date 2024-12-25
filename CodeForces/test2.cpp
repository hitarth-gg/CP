#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <queue>
#include <map>

using namespace std;

struct DFA
{
    int numStates;
    int numSymbols;
    int startState;
    set<int> finalStates;
    vector<vector<int>> transitions;   // transitions[state][symbol] = next state
    vector<set<int>> equivalentStates; // To store sets of equivalent states in the minimized DFA

    DFA(int n, int symbols) : numStates(n), numSymbols(symbols), transitions(n, vector<int>(symbols, -1)) {}
};

DFA minimizeDFA(const DFA &dfa)
{
    // Step 1: Initial Partition - split final and non-final states
    vector<set<int>> partitions(2);
    vector<int> statePartition(dfa.numStates, 0); // tells which partition a state belongs to

    // partition[0] = non-final states, partition[1] = final states
    for (int i = 0; i < dfa.numStates; i++)
    {
        if (dfa.finalStates.count(i))
        {
            partitions[1].insert(i);
            statePartition[i] = 1;
        }
        else
        {
            partitions[0].insert(i);
        }
    }

    queue<pair<int, int>> workQueue;
    for (int symbol = 0; symbol < dfa.numSymbols; symbol++)
    {
        for (int i = 0; i < partitions.size(); i++)
        {
            if (!partitions[i].empty())
            {
                workQueue.push({i, symbol}); // partition index, symbol
            }
        }
    }

    while (!workQueue.empty())
    {
        auto [partitionIndex, symbol] = workQueue.front();
        workQueue.pop();

        map<int, set<int>> movedStates;

        for (int state : partitions[partitionIndex])
        {
            int nextState = dfa.transitions[state][symbol];

            // not necessary since all states are reachable in a DFA
            if (nextState != -1)
            {
                movedStates[statePartition[nextState]].insert(state);
            }
        }

        for (auto &[partition, states] : movedStates)
        {
            // if(states.size() == partitions[partition].size()) then it means that the partition can't be further divided
            if (states.size() < partitions[partition].size())
            {
                int newIndex = partitions.size();
                partitions.push_back(set<int>());
                for (int state : states)
                {
                    partitions[partition].erase(state);
                    partitions[newIndex].insert(state);
                    statePartition[state] = newIndex;
                }

                for (int sym = 0; sym < dfa.numSymbols; sym++)
                {
                    workQueue.push({newIndex, sym});
                }
            }
        }
    }

    DFA minimizedDFA(partitions.size(), dfa.numSymbols);
    int newStartState = statePartition[dfa.startState];
    minimizedDFA.startState = newStartState;

    for (int i = 0; i < dfa.numStates; i++)
    {
        if (dfa.finalStates.count(i))
        {
            minimizedDFA.finalStates.insert(statePartition[i]);
        }
    }

    minimizedDFA.equivalentStates.resize(partitions.size());
    for (int i = 0; i < dfa.numStates; i++)
    {
        minimizedDFA.equivalentStates[statePartition[i]].insert(i);
    }

    for (int i = 0; i < dfa.numStates; i++)
    {
        for (int symbol = 0; symbol < dfa.numSymbols; symbol++)
        {
            int nextState = dfa.transitions[i][symbol];
            if (nextState != -1)
            {
                minimizedDFA.transitions[statePartition[i]][symbol] = statePartition[nextState];
            }
        }
    }

    return minimizedDFA;
}

int main()
{
    // 4 states and 2 symbols
    int numStates = 4;
    int numSymbols = 2;
    DFA dfa(numStates, numSymbols);
    dfa.startState = 0;
    dfa.finalStates = {1, 3};

    dfa.transitions[0][0] = 1;
    dfa.transitions[0][1] = 2;
    dfa.transitions[1][0] = 0;
    dfa.transitions[1][1] = 3;
    dfa.transitions[2][0] = 3;
    dfa.transitions[2][1] = 0;
    dfa.transitions[3][0] = 2;
    dfa.transitions[3][1] = 1;

    DFA minimizedDFA = minimizeDFA(dfa);

    cout << "Minimized DFA has " << minimizedDFA.numStates << " states." << endl;
    cout << "Start state: " << minimizedDFA.startState << endl;
    cout << "Final states: ";
    for (int state : minimizedDFA.finalStates)
    {
        cout << state << " ";
    }
    cout << endl;
    cout << "Transitions:" << endl;
    for (int state = 0; state < minimizedDFA.numStates; state++)
    {
        for (int symbol = 0; symbol < minimizedDFA.numSymbols; symbol++)
        {
            int nextState = minimizedDFA.transitions[state][symbol];
            if (nextState != -1)
            {
                cout << "state " << state << " on symbol " << symbol
                     << " -> " << nextState << endl;
            }
        }
    }

    cout << endl;

    cout << "Equivalent states in minimized DFA:" << endl;
    for (int i = 0; i < minimizedDFA.equivalentStates.size(); i++)
    {
        // cout << "State " << i << " represents: ";
        // for (int state : minimizedDFA.equivalentStates[i])
        // {
        //     cout << state << " ";
        // }
        cout << "{ ";
        for (int state : minimizedDFA.equivalentStates[i])
        {
            cout << state << " ";
        }
        cout << "}" << endl;
        cout << endl;
    }

    return 0;
}
