//Viet chuong trinh nhap mot mang gom n phan tu so thuc va mot so p, xuat ra so luong phan tu lon hon p

#include <stdio.h>

int Arr(int n, float a[], int p) {
	int i, num=0;
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
		scanf("%f",&a[i]);
		
		if (a[i]>p) {
			num++;
		}
	}
	
	return num;
}

int main() {
	int num,p;
	
	printf("Enter the number of elements: ");
	scanf("%d",&num);
	
	printf("Enter p number to compare: ");
	scanf("%d",&p);
	float arr[num];
	
	printf("The number of elements are greater than %d = %d",p,Arr(num,arr,p));
	
	return 0;
	
}

