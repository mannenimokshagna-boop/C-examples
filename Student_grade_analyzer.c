#include <stdio.h>

int main() {
    int SP, CP;

    // Input Cost Price and Selling Price
    scanf("%d %d", &CP, &SP);

    // Condition to check Profit, Loss, or No Profit No Loss
    if (SP > CP) {
        printf("Profit = %d", SP - CP);
    } 
    else if (CP > SP) {
        printf("Loss = %d", CP - SP);
    } 
    else {
        printf("No Profit, No Loss.");
    }

    return 0;
}
