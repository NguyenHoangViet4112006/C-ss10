#include <stdio.h>

int main(){
	int arr[]={1,2,3,4,5,6,8,5,4,32};
	int length = sizeof(arr)/sizeof(arr[0]);
	int item;
	printf("nhap vi tri cua phan tu ");
	scanf("%d", &item);
	int start = 0;
	int end =length;
	int mid;
	
	while(start <=end){
		mid =(start +end)/2;
		if(arr[mid]>item){
			end= mid -1;
		}else if(arr[mid]< item){
			start = mid +1;
		}else{
			printf("vi tri %d co phan tu la %d", item, mid);
			break;
		}
	}
	
	
	
	
	return 0;
}
