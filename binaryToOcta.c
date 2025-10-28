#include <stdio.h>

int main() {
    int binaryValue, remainder;
    int decimalValue = 0; 
    int i = 1;            
    int hexa[20];
    int x = 0, y;

    printf("Enter binary Number: ");
    scanf("%d", &binaryValue);

    // Convert Binary to Decimal
    while (binaryValue != 0) {
        remainder = binaryValue % 10;
        decimalValue = decimalValue + (remainder * i);
        i = i * 2;
        binaryValue = binaryValue / 10;
    }

    printf("Decimal Value: %d\n", decimalValue);

    // Convert Decimal to Octal
    if (decimalValue == 0) {
        printf("The Octal Value is: 0\n");
        return 0;
    }

    while (decimalValue != 0) {
        hexa[x] = decimalValue % 8;
        decimalValue = decimalValue / 8;
        x++;
    }

    printf("The Octal Value is: ");
    for (y = x - 1; y >= 0; y--) {
        printf("%d", hexa[y]);
    }
    printf("\n");

    return 0;
}
