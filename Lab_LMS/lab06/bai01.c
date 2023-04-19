//Viet chuong trinh tinh trung binh tong cac so chia het cho 3 trong mang

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

float Average(int arr[], int n) {
	int i;
	float sum=0, div=0;
	for (i=0;i<n;i++) {
		if (arr[i]%3==0) {
			sum+=arr[i];
			div++;
		}
	}
	if (div==0) {
		return 0;
	}
	return sum/div;
}

int main() {
	
	int element;
	printf("Enter the number of elements: ");
	scanf("%d",&element);
	
	int arr[element];
	
	Arr(arr,element);
	
	printf("Average: %.2f",Average(arr,element));

	return 0;
}
