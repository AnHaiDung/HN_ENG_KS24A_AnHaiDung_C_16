#include <stdio.h>
void addItem(int arr[],int * index,int *num){
	arr[*index]=*num;
	for(int j=0;j<4;j++){
		printf("%d\n",arr[j]);
	}
}

int main(){
	int arr[]={2,4,6,8};
	for(int i=0;i<4;i++){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	int *index;
	int *num;
	printf("nhap vi tri muon thay trong mang ");
	scanf("%d",&index);
	printf("nhap phan tu muon thay ");
	scanf("%d",&num);
	addItem(arr,&index,&num);
	return 0;
}
