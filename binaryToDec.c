#include<stdio.h>
#define SIZE 20
int binToDec(char char_bin[]);
int main(){
	int result=0;
	char ch_bin[SIZE];
	printf("Enter Binary Number (0-1): ");
	scanf("%[^\n]", &ch_bin);

	result=binToDec(ch_bin);
	if(result == -1){
		printf("User input is invalid!");
	}else{
		printf("Result : %d", result);
	}
	return 0;
}
int binToDec(char char_bin[]){
	int i=0;
	int number=0;
	int decimal=0;
	while(char_bin[i] !='\0'){
		
		number=char_bin[i]-48; // binary 0 of 1 Result
		if(number != 0 && number != 1){
			return -1;
		}
		decimal=(decimal*2)+number;
		i++;
	}

	return decimal;

}
