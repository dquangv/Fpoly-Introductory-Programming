#include <stdio.h>

void bai1(int n) {
	if (n%7==0) {
		printf("%d chia het cho 7.\n",n);
	} else {
		printf("%d khong chia het cho 7.\n",n);
	}
	
	if (n%2==0) {
		printf("%d la so chan.\n",n);
	} else {
		printf("%d la so le.\n",n);
	}
	
	if (n>50) {
		printf("%d lon hon 50.\n",n);
	} else {
		printf("%d khong lon hon 50.\n",n);
	}
}

void bai2() {
	int num,i,min, count;
	printf("Nhap so luong phan tu cho mang: ");
	scanf("%d",&num);
	
	int arr[num];
	
	for (i=0;i<num;i++) {
		printf("Nhap gia tri cho phan tu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	min=arr[0];
	printf("Phan tu co gia tri nho nhat trong mang la: ");
	for (i=1;i<num;i++) {
		if (min>arr[i]) {
			min=arr[i];
		}
	}
	printf("%d\n",min);
	
	count=0;
	for (i=0;i<num;i++) {
		if (arr[i]%2==0) {
			count++;
		}
	}
	printf("Co %d gia tri chan trong mang.\n",count);
}

struct SinhVien {
	char maSV[10], ten[50];
	float diem;
	const char* ketQua;
};

void bai3() {
	int num, i;
	
	printf("So luong sinh vien: ");
	scanf("%d%*c",&num);
	
	struct SinhVien sinhVien[num];
	for (i=0;i<num;i++) {
		printf("Ma so sinh vien: ");
		fgets(sinhVien[i].maSV,10,stdin);
		printf("Ten sinh vien: ");
		fgets(sinhVien[i].ten,50,stdin);
		printf("Diem thi: ");
		scanf("%f%*c",&sinhVien[i].diem);
		if (sinhVien[i].diem>=5) {
			sinhVien[i].ketQua="Dau";
		} else {
			sinhVien[i].ketQua="Rot";
		}
	}
	
	for (i=0;i<num;i++) {
		printf("Ma so sinh vien: %s",sinhVien[i].maSV);
		printf("Ten sinh vien: %s",sinhVien[i].ten);
		printf("Diem thi: %.2f\n",sinhVien[i].diem);
		printf("Ket qua: %s\n",sinhVien[i].ketQua);
	}
}

void bai4() {
	int num, i, count=0;
	
	printf("So luong sinh vien: ");
	scanf("%d%*c",&num);
	
	struct SinhVien sinhVien[num];
	for (i=0;i<num;i++) {
		printf("Ma so sinh vien: ");
		fgets(sinhVien[i].maSV,10,stdin);
		printf("Ten sinh vien: ");
		fgets(sinhVien[i].ten,50,stdin);
		printf("Diem thi: ");
		scanf("%f%*c",&sinhVien[i].diem);
		if (sinhVien[i].diem>=5) {
			sinhVien[i].ketQua="Dau";
		} else {
			sinhVien[i].ketQua="Rot";
		}
	}
	
	for (i=0;i<num;i++) {
		if (sinhVien[i].ketQua=="Dau") {
			printf("Ma so sinh vien: %s",sinhVien[i].maSV);
			printf("Ten sinh vien: %s",sinhVien[i].ten);
			printf("Diem thi: %.2f\n",sinhVien[i].diem);
			printf("Ket qua: %s\n",sinhVien[i].ketQua);
			count++;
		}
	}
	printf("Tong so sinh vien dau: %d", count);
}

int main () {
	
	int choice, num;
	
	do {
		printf("Ban muon xem bai (1, 2, 3, 4): ");
		scanf("%d",&choice);
	} while (choice<1 || choice>4);
	
	switch (choice) {
		case 1:
			
			printf("Nhap so: ");
			scanf("%d",&num);
			
			bai1(num);
			
			break;
			
		case 2:
			
			bai2();
			
			break;
			
		case 3:
			
			bai3();
			
			break;
			
		case 4:
			
			bai4();
			
			break;
	}
	
	return 0;
}
