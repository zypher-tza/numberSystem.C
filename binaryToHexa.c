#include <stdio.h>

int main() {
    int binaryValue = 0;
    int remainder = 0;
    int decimalValue = 0;
    int hexa[100];
    int x = 0, y;
    int i = 1;

    printf("Enter binary number (1-0): ");
    scanf("%d", &binaryValue);

    while (binaryValue != 0) {
        remainder = binaryValue % 10;
        decimalValue = decimalValue + (remainder * i);
        i = i * 2;
        binaryValue = binaryValue / 10;
    }

   // printf("Decimal: %d\n", decimalValue);

    while (decimalValue != 0) {
        hexa[x] = decimalValue % 16;
        decimalValue = decimalValue / 16;
        x++;
    }

    printf("Hexadecimal: ");
    for (y = x - 1; y >= 0; y--) {
        if (hexa[y] > 9)
            printf("#%c", hexa[y] + 55);
        else
            printf("#%d", hexa[y]);
    }
    printf("\n");

    return 0;
}
