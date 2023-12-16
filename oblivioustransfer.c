#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Simulating a basic oblivious transfer-like scenario

// Alice has two pieces of information: 0 and 1
#define ALICE_ITEM_0 0
#define ALICE_ITEM_1 1

// Bob has a choice: he wants either 0 or 1
#define BOB_CHOICE 1  // Bob wants item 1

// Oblivious Transfer Simulation
int obliviousTransfer(int choice) {
    // Simulating Alice's items
    int item0 = ALICE_ITEM_0;
    int item1 = ALICE_ITEM_1;

    // Simulating Bob's choice
    int bobChoice = choice;

    // Simulating the transfer
    int transferredItem = (bobChoice == 0) ? item0 : item1;

    return transferredItem;
}

int main() {
    // Simulating Bob's choice (Bob wants item 1)
    int bobChoice = BOB_CHOICE;

    // Performing oblivious transfer
    int receivedItem = obliviousTransfer(bobChoice);

    // Output the result
    printf("Bob received: %d\n", receivedItem);

    return 0;
}
