#include <stdio.h>
void swap(int *x,int *y, int *sum){
	*sum=*x+*y;
	printf("tong cua 2 so nguyen la: %d\n",*sum);
}
int main(){
	int a=5;
	int b=15;
	int sum;
	swap( &a, &b, &sum);
	return 0;
}
