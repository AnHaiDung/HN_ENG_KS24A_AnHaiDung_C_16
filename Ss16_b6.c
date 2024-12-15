#include <stdio.h>
void showItem(int *num,int arr[]){
	int flag=0;
	for (int i=0;i<4;i++){
		if(*num==arr[i]){
			printf("phan tu co vi tri %d trong mang\n",i);
			flag++;
		}
	}
	if(flag==0){
		printf("khong tim thay phan tu trong mang");
	}
}
int main(){
	int arr[]={2,4,6,8};
	for(int i=0;i<4;i++){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	int *num;
	printf("nhap phan tu muon tim kiem \n");
	scanf("%d",&num);
	showItem(&num,arr);
	return 0;
}
