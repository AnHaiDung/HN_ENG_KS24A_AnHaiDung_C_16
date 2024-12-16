#include <stdio.h>

void addItem(int array[],int *size,int index){
	for(int i=index;i<*size;i++){
		array[i]=array[i+1];
	}
	(*size)--;
	for (int i=0;i<*size;i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
}
int main(){
	int array[50]={2,5,4,3,1};
	int size=5;
	int index;
	for (int i=0;i<size;i++){
		printf("array[%d]=%d\n",i,array[i]);
	}
	printf("nhap vi tri muon xoa ");
	scanf("%d",&index);
	addItem(array,&size,index);
	return 0;
}

