#include <stdio.h>

int main() {
    int n, m;
    printf("nhap so dong ");
    scanf("%d", &n);
    printf("nhap so cot ");
    scanf("%d", &m);

    int arr[100][100];
    printf("nhap gia tri cac phan tu trong mang ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
	for(int cot=0; cot <m; cot++){
		for(int i =0; i<n; i++){
			for(int j= i+1; j<n; j++){
				if(arr[i][cot]> arr[j][cot]){
					int temp;
					temp= arr[i][cot];
					arr[i][cot]= arr[j][cot];
					arr[j][cot]= temp;
				}
			}
		}
	}
	printf("mang sau khi sap xep theo tung cot ");
	for (int i=0; i<n ; i++){
		for(int j=0;j<m; j++){
			printf("%d", arr[i][j]);
		}
	}
	
	
	
	
	
    return 0;
}

