//Bai 1: Viet chuong trinh xuat ra ket qua quy cua 1 thang duoc nhap tu ban phim
/*
#include <stdio.h>

int main() {
	
	int mon;
	printf("Nhap thang: ");
	scanf("%d",&mon);
	
	if (mon==1 || mon==2 || mon==3) {
		printf("%d thuoc quy 1.",mon);
	} else if (mon==4 || mon==5 || mon==6) {
		printf("%d thuoc quy 2.",mon);
	} else if (mon==7 || mon==8 || mon==9) {
		printf("%d thuoc quy 3.",mon);
	} else if (mon==10 || mon==11 || mon==12) {
		printf("%d thuoc quy 4.",mon);
	} else {
		printf("Thang khong hop le.");
	}
	
	return 0;
}
*/

//Bai 2: Viet chuong trinh xuat ra man hinh cac uoc so nho hon so nguyen duong n nhap tu ban phim
/*
#include <stdio.h>

int main() {
	
	int num,i;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&num);
	
	printf("Uoc cua %d la:",num);
	for (i=1;i<num;i++) {
		if (num%i==0) {
			printf(" %d",i);
		}
	}
	
	return 0;
}
*/

//Bai 3: Viet chuong trinh xuat ra cac phan tu tai vi tri chan theo thu tu nhap tu ban phim
/*
#include <stdio.h>

int main() {
	
	int num;
	printf("Nhap so luong phan tu cho mang: ");
	scanf("%d",&num);
	
	int arr[num],i;
	for (i=0;i<num;i++) {
		printf("Nhap gia tri cho phan tu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Gia tri cac phan tu tai vi tri chan la:");
	for (i=0;i<num;i+=2) {
		printf(" %d",arr[i]);
	}
	
	return 0;
}
*/

//Bai 4: Viet chuong trinh tao du lieu kieu cau truc USB (ten hang sx, dung luong, don gia), viet ham nhap thong tin cho 1 mang gom n USB, viet ham xuat ra man hinh nhung USB co don gia <=200000

#include <stdio.h>
#include <string.h>

struct USB {
	char tenHang[15];
	int dungLuong;
	float donGia;
};

void array (struct USB usb[], int n) {
	int i;
	
	for (i=0;i<n;i++) {
		fflush(stdin);
		printf("USB %d\n",i+1);
		printf("Ten hang: ");
		scanf("%s",&usb[i].tenHang);
	//	if (usb[i].tenHang[strlen(usb[i].tenHang)-1]=='\n') {
	//		usb[i].tenHang[strlen(usb[i].tenHang)-1]=='\0';
	//	}
		printf("Dung luong: ");
		scanf("%d",&usb[i].dungLuong);
		printf("Don gia: ");
		scanf("%f",&usb[i].donGia);
	}
	
	
}

void sortedUSB (struct USB usb[], int n) {
	int i;
	
	printf("Ten hang\tDung luong\tDon gia");
	for (i=0;i<n;i++) {
		if (usb[i].donGia<=200000) {
			printf("\n%s\t\t%d\t\t%.0f",usb[i].tenHang,usb[i].dungLuong,usb[i].donGia);
		}
	}
}


int main() {
	
	int num;
	printf("Nhap so luong USB: ");
	scanf("%d",&num);
	
	struct USB usb[num];
	array(usb,num);
	sortedUSB(usb,num);
	
	return 0;
}

