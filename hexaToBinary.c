#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 100

int main() {

    char hexa[SIZE];
    int i = 0, x = 0, y = 0, length = 0, decimal = 0;
    int remainder[SIZE];
    printf("Enter your hexa : ");
    scanf("%[^\n]", hexa);

    for (length = 0; hexa[length] != '\0'; ++length);
    
    for (i = 0; hexa[i] != '\0'; ++i, --length) {
        if (hexa[i] >= '0' && hexa[i] <= '9') {
            decimal += (hexa[i] - '0') * (int)pow(16, length - 1);
        } else if (hexa[i] >= 'A' && hexa[i] <= 'F') {
            decimal += (hexa[i] - 55) * (int)pow(16, length - 1);
        } else if (hexa[i] >= 'a' && hexa[i] <= 'f') {
            decimal += (hexa[i] - 87) * (int)pow(16, length - 1);
        } else {
            printf("\nInvalid character '%c' found!\n", hexa[i]);
            return 1;
        }
    }

    printf("\nDecimal Value : %d\n", decimal);
    
    while(decimal != 0){
    	remainder[x] = decimal%2;
	decimal = decimal/2;
	x++;
    }
    printf("The size of the binary array is : %d\n", x);
    printf("The Binary Value is : ");

    for(y=x-1; y >=0; y--){
    	printf("%d", remainder[y]);
    }
    return 0;
}
