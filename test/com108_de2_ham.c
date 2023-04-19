#include <stdio.h>
#include <string.h>

void chiaHet(int a, int b) {
	int i;
	printf("Cac so chia het cho 2 hoac 7 trong khoang %d va %d la:",a,b);
	for (i=a;i<=b;i++) {
		if (i%2==0 || i%7==0) {
			printf(" %d",i);
		}
	}
}


void chiaSauNhoMuoi(int arr[]) {
	int i, sum=0, n;
	
	printf("Nhap so luong phan tu cho mang: ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++) {
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	
	
	printf("Tong cac so chan chia het cho 3:");
	for (i=0;i<n;i++) {
		if (arr[i]%6==0) {
			sum+=arr[i];
		}
	}
	printf("%d",sum);
	
	printf("\nCac so nho hon 10:");
	for (i=0;i<n;i++) {
		if (arr[i]<10) {
			printf(" %d",arr[i]);
		}
	}
}

struct phanSo {
	int tuSo, mauSo;
};

void mangPhanSo(struct phanSo PhanSo[]) {
    int i, n;
    
    printf("Nhap so luong phan so: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++) {
        printf("Nhap tu so cho phan so %d: ",i+1);
        scanf("%d",&PhanSo[i].tuSo);
        printf("Nhap mau so cho phan so %d: ",i+1);
        scanf("%d",&PhanSo[i].mauSo);
        printf("Phan so %d: %d/%d\n",i+1,PhanSo[i].tuSo,PhanSo[i].mauSo);
    }
}

void nhapChuoi(char chuoi[]) {
	printf("Nhap chuoi: ");
	gets(chuoi);
	
   	if (chuoi[strlen(chuoi)-1]=='\n') {
		chuoi[strlen(chuoi)-1]=='\0';
	}
}

void demSo(char chuoi[]) {
	int i, count=0;
	for (i=0;i<strlen(chuoi)-1;i++) {
		if (chuoi[i]>='0' && chuoi[i]<='9') {
			count++;
		}
	}
	
	printf("So ky tu so trong chuoi la: %d\n",count);
}

void xuatChuoi(char chuoi[]) {
	printf("Chuoi: %s",chuoi);
}


int main() {
	
	int min, max, choice, num1, num2, arr[3];
	struct phanSo PhanSo[3];
	char chuoi[100];
	
	do {
		printf("Ban muon xem bai (1, 2, 3, 4): ");
		scanf("%d",&choice);
	} while (choice<1 || choice>4);
	
	fflush(stdin);
	
	switch (choice) {
		case 1:
			
			do {
				printf("Nhap min, max: ");
				scanf("%d%d",&min,&max);
			} while (min>=max);
		
			chiaHet(min,max);
			
			break;
		
		case 2:
			
			chiaSauNhoMuoi(arr);
			
			break;
			
		case 3:

			mangPhanSo(PhanSo);
			
			break;
			
			
		case 4:
			
			nhapChuoi(chuoi);
			demSo(chuoi);
			xuatChuoi(chuoi);
			
			break;
	}
	
	return 0;
}
