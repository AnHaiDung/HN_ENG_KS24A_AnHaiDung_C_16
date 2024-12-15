#include <stdio.h>
void number(int arr[]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
				int number;
				number=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=number;
			}
		}
	}
	for(int i=0; i<5; i++){
		printf("%d \t",arr[i]);
	}
}
int main(){
	int arr[]={9,5,7,3,4};
	number(&arr);
	return 0;
}
