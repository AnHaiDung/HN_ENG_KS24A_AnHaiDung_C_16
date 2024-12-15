#include <stdio.h>
int main(){
	char inputString[100];
	char reverseString[100];
	printf("nhap vao chuoi ");
	fgets(inputString,100,stdin);
	int size=strlen(inputString);
	for(int i=0;i<size;i++){
		reverseString[i]=inputString[i];
	}
	for(int i=size;i>=0;i--){
		printf("%c\n",reverseString[i]);
	}
	return 0;
}
