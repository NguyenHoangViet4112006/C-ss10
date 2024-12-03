#include <stdio.h>

int main() {
	
	
	
    int arr[]={9,1,6,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x, i;
    int found =0;
    printf("nhap vao phan tu can tim: ");
    scanf("%d", &x);
    for (i = 0; i<n; i++){
        if (arr[i] == x){
            printf("phan tu %d ton tai ", x);
            found = 1;
        }
    }





    return 0;
}

