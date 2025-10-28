#include<stdio.h>

int main(){
	
	int decimal=0;
	int bin[100],x=0,y;
	printf("Please enter decimal number: ");
	scanf("%d", &decimal);
	
	while(decimal != 0){
		bin[x]= decimal%2;
		decimal=decimal/2;
		x++;
	}
	printf("Binary Value is : ");
	for(y=x-1; y>=0; y--){
		printf("%d", bin[y]);
	}

	return 0;
}
