#include <stdio.h>
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
    *y=temp;
	printf("gia tri cua a la: %d\n",*x);
	printf("gia tri cua b la: %d\n",*y);
}
int main(){
	int a=5;
	int b=15;
	swap( &a, &b);
	return 0;
}
