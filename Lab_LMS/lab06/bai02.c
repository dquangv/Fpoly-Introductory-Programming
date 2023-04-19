//Viet chuong trinh tim gia tri lon nhat va nho nhat trong mang

#include <stdio.h>

void Arr(int arr[], int n) {
	int i;
	
	for (i=0;i<n;i++) {
		printf("Enter a number for element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Arr = [ ");
	
	for (i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	printf("]\n");
}

void minMax(int arr[], int n) {
	int min=arr[0], max=arr[0], i;
	
	for (i=1;i<n;i++) {
		if (min>arr[i]) {
			min = arr[i];
		}
		
		if (max<arr[i]) {
			max = arr[i];
		}
	}
	
	printf("Min of arr: %d\n",min);
	printf("Max of arr: %d",max);
}

int main() {
	
	int element;
	printf("Enter the number of elements in arr: ");
	scanf("%d",&element);
	
	int arr[element];
	
	Arr(arr,element);
	
	minMax(arr,element);
	return 0;
}
