#include <stdio.h>
#include <stdlib.h>

// Simulate the sender's function in 1-out-of-2 OT
void sender(int choice0, int choice1, int *c0, int *c1) {
    // Simulate the sender's random choice of two options
    int r = rand() % 2;

    // Set c0 and c1 based on the sender's random choice
    *c0 = (r == 0) ? choice0 : choice1;
    *c1 = (r == 1) ? choice0 : choice1;
}

// Simulate the receiver's function in 1-out-of-2 OT
int receiver(int selection) {
    // Simulate the receiver's choice (0 or 1)
    int r = rand() % 2;

    // Return the selected option based on the receiver's choice
    return (r == 0) ? selection : -1; // -1 represents the non-selected option
}

int main() {
    // Sender's options
    int choice0 = 42;
    int choice1 = 99;

    // Receiver's choice
    int receiverChoice = 0; // Assume the receiver chooses the first option

    // Sender and Receiver communicate privately
    int c0, c1;
    sender(choice0, choice1, &c0, &c1);
    int result = receiver(receiverChoice);

    // Display the results
    printf("Sender's choices: c0 = %d, c1 = %d\n", c0, c1);
    printf("Receiver's selected option: %d\n", result);

    return 0;
}

