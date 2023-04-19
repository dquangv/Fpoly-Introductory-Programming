//Viet chuong trinh tinh binh phuong cac phan tu trong mang 2 chieu

#include <stdio.h>
#include <stdlib.h>

void Arr_square(int n, int m, int *a) {
	int i,j;
	
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i*m+j]);
			a[i*m+j]*=a[i*m+j];
		}
	}
}

void Arr_print(int n, int m, int *a) {
	int i,j;
	printf("\nArr after squaring:\narr =");
	
	for (i=0;i<n;i++) {
		printf("\n");
		for (j=0;j<m;j++) {
			printf("%d\t",a[i*m+j]);
		}
	}
}

int main() {
	int row, col;
	printf("Enter row of arr: ");
	scanf("%d",&row);
	printf("Enter column of arr: ");
	scanf("%d",&col);

	int *arr = malloc(row*col*sizeof(int));
	Arr_square(row,col,arr);
	Arr_print(row,col,arr);
	
	free(arr);
	
	return 0;
}





