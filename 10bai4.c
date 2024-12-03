#include <stdio.h>

int main() {
    int arr[] = {3, 4, 2, 1, 7};
    for (int i = 0; i < 5-1; i++) {
        int minindex = i;
        for (int j = i+1; j < 5; j++) {
            if (arr[j] > arr[minindex]) {
            	int temp; 
                temp = arr[minindex];
                arr[minindex] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    
    
    
    return 0;
}

