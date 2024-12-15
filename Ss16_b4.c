#include <stdio.h>
void showItem(int *ptr,int arr[]){
	ptr=arr;
	for (int i=0;i<4;i++){
    	printf("gia tri cac phan tu trong mang %d\n",*(ptr+i));
	}
}
int main(){
	int arr[]={2,4,6,8};
	int *ptr;
	showItem(&ptr,arr);
	return 0;
}
