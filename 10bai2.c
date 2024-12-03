#include <stdio.h>
int main(){
	int arr[]= {4,3,9,8,1,5,6,3,2,7};
	int size = (sizeof(arr)/sizeof(arr[0]));
	for (int i=0;i<size; i++){
		int minindex= i;
		for (int j= i+1; j<size; j++){
			if (arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		if(minindex!=i){
			int temp;
			temp = arr[minindex];
			arr[minindex]=arr[i];
			arr[i]= temp;
		}
		
	}
	for (int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
