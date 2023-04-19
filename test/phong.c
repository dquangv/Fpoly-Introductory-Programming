#include <stdio.h>

struct NHANVIEN {
	char MaNV[10], HoTen[50];
	float Luong;
}; //khai bao struct voi cac kieu du lieu trong struct, char la kieu chuoi, float la kieu so thuc

int main() {
	struct NHANVIEN NhanVien[2]; //tao 3 nhan vien 0, 1, 2
	int i;
	
	for (i=0;i<3;i++) { //i<3 vi chi chay i=0,1,2 la 3 nhan vien
		printf("Ma nhan vien: ");
		gets(NhanVien[i].MaNV); //gan gia tri vua nhap tu ban phim vao bien MaNV trong struct NhanVien
		printf("Ho ten nhan vien: ");
		gets(NhanVien[i].HoTen); //tuong tu o tren
		printf("Luong: ");
		scanf("%f",&NhanVien[i].Luong); //vi la kieu du lieu float nen %f
		fflush(stdin); //loai bo ki tu xuong dong
	}
	
	struct NHANVIEN temp; //tao struct tam thoi de luu giu struct co muc luong cao nhat
	temp = NhanVien[0]; //gan struct NhanVien[0] cho temp de khong ton 1 lan chay vong lap
	for (i=1;i<3;i++) { //chay tu i=1 vi i=0 da duoc gan vao temp o tren
		if (temp.Luong<NhanVien[i].Luong) { //so sanh luong cua struct tam thoi temp voi nhung struct con lai
			temp = NhanVien[i]; //neu co struct nao khac luong cao hon temp thi struct do se duoc gan vao temp de cuoi cung temp tro thanh struct co luong cao nhat
		}
	}
	
	printf("Nhan vien co muc luong cao nhat\n"); //\n la tu dong xuong dong
	printf("Ma nhan vien: %s\n",temp.MaNV);
	printf("Ho ten nhan vien: %s\n",temp.HoTen);
	printf("Luong: %.0f",temp.Luong);
		

}
