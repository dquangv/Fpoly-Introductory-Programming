//Viett chuong trinh sap xep mang theo thu tu giam dan

#include <stdio.h>

void Arr(int arr[], int n) {
	int i;
	
	for (i=0;i<n;i++) {
		printf("Enter a number for element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Before arranging:\narr = [ ");
	
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	
	printf("]\n");
}

void arrArrange(int arr[], int n) {
	int i, j, temp;
	
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (arr[i]<arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("After arranging:\narr = [ ");
	
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	
	printf("]");
}

int main() {
	
	int element;
	printf("Enter the number of elements: ");
	scanf("%d",&element);
	
	int arr[element];
	
	Arr(arr,element);
	
	arrArrange(arr,element);
	
	return 0;
}
