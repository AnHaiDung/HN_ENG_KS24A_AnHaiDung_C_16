#include <stdio.h>

int main(){
	int number=7;
	int *num=number;
	printf("%d\n",number);
	printf("%d",&num);
	return 0;
}
