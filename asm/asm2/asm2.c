//ASM

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	
	system("color 30");
	int choice, hour_start, hour_end, consume_ele, check11=2, flag11=0, check12=2, flag12=0, num1, num2, soDu, ucln, bcnn=1, tien, tien500, tien200, tien100, tien50, tien20, tien10, tien5, tien2, tien1, i, j, kq[1], dem, tu1, tu2, mau1, mau2, again;
	long fee_karaoke;
	float arr_ele[6] = {1.678, 1.734, 2.014, 2.536, 2.834, 2.927}, num, temp, vay, tienConLai;
	double soDu6, tien6;
	time_t tg;
	
	MENU: do {
		printf("\t\t\t*-------------------------------------------------------*\n");
		printf("\t\t\t|\tCHAO MUNG BAN DEN VOI CHUONG TRINH!\t\t|\n");
		printf("\t\t\t|\t(Chuong trinh bao gom 10 chuc nang)\t\t|\n");
		printf("\t\t\t|\t\t\t\t\t\t\t|\n");
		printf("\t\t\t|Chuc nang 1: Kiem tra so nguyen\t\t\t|\n");
		printf("\t\t\t|Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\t|\n");
		printf("\t\t\t|Chuc nang 3: Tinh tien thue phong hat karaoke\t\t|\n");
		printf("\t\t\t|Chuc nang 4: Tinh tien dien\t\t\t\t|\n");
		printf("\t\t\t|Chuc nang 5: Doi tien\t\t\t\t\t|\n");
		printf("\t\t\t|Chuc nang 6: Tinh lai suat vay tra gop ngan hang\t|\n");
		printf("\t\t\t|Chuc nang 7: Tinh tien vay mua xe\t\t\t|\n");
		printf("\t\t\t|Chuc nang 8: Xep hang hoc luc\t\t\t\t|\n");
		printf("\t\t\t|Chuc nang 9: FPOLY-LOTT\t\t\t\t|\n");
		printf("\t\t\t|Chuc nang 10: Tinh toan phan so\t\t\t|\n");
		printf("\t\t\t|Chuc nang 11: Thoat khoi chuong trinh\t\t\t|\n");
		printf("\t\t\t*-------------------------------------------------------*\n");
		printf("\nMoi ban chon chuc nang muon su dung (1->11): ");
		
		scanf("%d",&choice);
	} while (choice<1 || choice>11);
	
	printf("\n");
	
	switch (choice) {
		
		
		CASE1: case 1:
			printf("-----------------------------------------------------------------------");
			printf("\nChuc nang 1: KIEM TRA SO NGUYEN\n");
			printf("(Kiem tra so nguyen, so nguyen to va so chinh phuong)\n\n");
			printf("Nhap so muon kiem tra di nao: ");
			scanf("%f",&num);
			printf("\n");
			
			if (num-(int)num==0 & num>=0) {
				printf("%.0f la so nguyen.\n",num);
				
				if ((int)num==1 || (int)num==0) {
					printf("%.0f khong phai la so nguyen to.\n",num);
					printf("%d la so chinh phuong.",(int)num);
					break;
				} else {
					while (check11<=(int)num/2) {
						if ((int)num%check11==0) {
							printf("%.0f khong phai la so nguyen to.\n",num);
							flag11=1;
							break;
						} else {
							check11++;
						}
					}
					if (flag11==0) {
					printf("%d la so nguyen to.\n",(int)num);
					}
				}
				
				while (check12<=(int)num/2) {
					if (check12*check12==(int)num) {
						printf("%d la so chinh phuong.",(int)num);
						flag12=1;
						break;
					} else {
						check12++;
					}
				}
				if (flag12==0) {
					printf("%d khong phai la so chinh phuong.",(int)num);
				}
			
			} else {
				printf("%.3f khong phai la so nguyen, khong phai la so nguyen to va cung khong phai la so chinh phuong.",num);
			}
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE1;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			break;
			
			
		CASE2: case 2:
			printf("-----------------------------------------------------------------------");
			printf("\nChuc nang 2: TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO\n");
			printf("Chuong trinh se cho ket qua uoc chung lon nhat va boi chung nho nhat cua 2 so ma ban nhap.\n\n");
			
			do {
				printf("Nhap so thu nhat: ");
				scanf("%d",&num1);
			} while (num1<=0);
			
			do {
				printf("Nhap so thu hai: ");
				scanf("%d",&num2);
			} while (num2<=0);
			
			printf("\n");
			i=1;
			while (i<=num1) {
				if (num1%i==0 && num2%i==0) {
					ucln=i;
				}
				i++;
			}
			printf("Uoc chung lon nhat cua %d va %d la %d\n",num1,num2,ucln);
			
			i=num1;
			while (bcnn!=num1*num2) {
				if (i%num1==0 &&i%num2==0) {
					bcnn=i;
					break;
				}
				i++;
			}
			printf("Boi chung nho nhat cua %d va %d la %d\n",num1,num2,bcnn);
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE2;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			
			break;
			
			
		CASE3: case 3:
			printf("------------------------------------------------------------------------");
			printf("\nChuc nang 3: TINH TIEN HAT KARAOKE\n");
			printf("Quan Karaoke chi hoat dong trong khoang tu 12 gio den 23 gio.\n");
			printf("(50k/h, giam 30%% tu gio thu 4, neu bat dau thue trong khoang tu 14 gio den 17 gio thi duoc giam tiep 10%% tong tien thanh toan)\n\n");
			
			do {
				printf("Ban muon thue luc may gio ne: ");
				scanf("%d",&hour_start);
			} while (hour_start<12 || hour_start>22);
			
			do {
				printf("Hat toi may gio thi met ne: ");
				scanf("%d",&hour_end);
			} while (hour_end<=hour_start || hour_end>23);
			
			printf("\n");
			
			if ((hour_end-hour_start)<=3) {
				printf("Tong thiet hai cua ban la %d dong",50000*(hour_end-hour_start));
			} else {
				if (hour_start>=14 && hour_start<=17) {
					printf("Tong thiet hai cua ban la %.0f dong",(150000+(hour_end-hour_start-3)*50000*0.7)*0.9);
				} else {
					printf("Tong thiet hai cua ban la %.0f dong",150000+(hour_end-hour_start-3)*50000*0.7);
				}
			}
	
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE3;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			break;
			
			
		CASE4: case 4:
			printf("------------------------------------------------------------------------");
			printf("\nChuc nang 4: TINH TIEN DIEN\n");
			printf("Chuong trinh cho ra ket qua so tien phai tra dua tren so kWh ban da su dung.\n\n");
			printf("Bang gia\n");
			printf("Bac 1\t| 0 - 50 kWh\t\t| 1.678 (dong/kWh)\n");
			printf("Bac 2\t| 51 - 100 kWh\t\t| 1.734 (dong/kWh)\n");
			printf("Bac 3\t| 101 - 200 kWh\t\t| 2.014 (dong/kWh)\n");
			printf("Bac 4\t| 201 - 300 kWh\t\t| 2.536 (dong/kWh)\n");
			printf("Bac 5\t| 301 - 400 kWh\t\t| 2.834 (dong/kWh)\n");
			printf("Bac 6\t| 401 kWh tro len\t| 2.927 (dong/kWh)\n\n");	
			
			do {
				printf("So kWh ban da dung trong thang vua qua: ");
				scanf("%d",&consume_ele);
			} while (consume_ele<=0);
			
			printf("\n");
			
			if (consume_ele<=50) {
				printf("Tong thiet hai cua ban la %.3f dong.",consume_ele*arr_ele[0]);
			} else if (consume_ele<=100) {
				printf("Tong thiet hai cua ban la %.3f dong.",50*arr_ele[0]+(consume_ele-50)*arr_ele[1]);
			} else if (consume_ele<=200) {
				printf("Tong thiet hai cua ban la %.3f dong.",50*arr_ele[0]+50*arr_ele[1]+(consume_ele-100)*arr_ele[2]);
			} else if (consume_ele<=300) {
				printf("Tong thiet hai cua ban la %.3f dong.",50*arr_ele[0]+50*arr_ele[1]+100*arr_ele[2]+(consume_ele-200)*arr_ele[3]);
			} else if (consume_ele<=400) {
				printf("Tong thiet hai cua ban la %.3f dong.",50*arr_ele[0]+50*arr_ele[1]+100*arr_ele[2]+100*arr_ele[3]+(consume_ele-300)*arr_ele[4]);
			} else {
				printf("Tong thiet hai cua ban la %.3f dong.",50*arr_ele[0]+50*arr_ele[1]+100*arr_ele[2]+100*arr_ele[3]+100*arr_ele[4]+(consume_ele-400)*arr_ele[5]);
			}
			
			printf("\nNho dong tien khong thoi bi cup dien nha ma!");
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE4;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			break;
			
		CASE5: case 5:
			printf("------------------------------------------------------------------------");
			printf("\nChuc nang 5: DOI TIEN\n");
			printf("Chuong trinh cho ra ket qua cac menh gia tien duoc doi ra.\n\n");
			
			do {
				printf("Nhap so tien can quy doi: ");
				scanf("%d",&tien);
			} while (tien<1);
			
			printf("\n");
			soDu=tien;
			
			while (soDu!=0) {
				tien500 = (int) soDu/500;
				if (soDu%500==0) {
					printf("%d doi duoc:\n%d to 500",tien,tien500);
					break;
				}
				
				soDu -= tien500*500;
				
				tien200 = (int) soDu/200;
				if (soDu%200==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200",tien,tien500,tien200);
					break;
				}
				
				soDu -= tien200*200;
				
				tien100 = (int) soDu/100;
				if (soDu%100==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200\n%d to 100",tien,tien500,tien200,tien100);
					break;
				}
				
				soDu -= tien100*100;
				
				tien50 = (int) soDu/50;
				if (soDu%50==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200\n%d to 100\n%d to 50",tien,tien500,tien200,tien100,tien50);
					break;
				}
				
				soDu -= tien50*50;
				
				tien20 = (int) soDu/20;
				if (soDu%20==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200\n%d to 100\n%d to 50\n%d to 20",tien,tien500,tien200,tien100,tien50,tien20);
					break;
				}
				
				soDu -= tien20*20;
				
				tien10 = (int) soDu/10;
				if (soDu%10==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200\n%d to 100\n%d to 50\n%d to 20\n%d to 10",tien,tien500,tien200,tien100,tien50,tien20,tien10);
					break;
				}
				
				soDu -= tien10*10;
				
				tien5 = (int) soDu/5;
				if (soDu%5==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200\n%d to 100\n%d to 50\n%d to 20\n%d to 10\n%d to 5",tien,tien500,tien200,tien100,tien50,tien20,tien10,tien5);
					break;
				}
				
				soDu -= tien5*5;
				
				tien2 = (int) soDu/2;
				if (soDu%2==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200\n%d to 100\n%d to 50\n%d to 20\n%d to 10\n%d to 5\n%d to 2",tien,tien500,tien200,tien100,tien50,tien20,tien10,tien5,tien2);
					break;
				}
				
				soDu -= tien2*2;
				
				tien1 = soDu;
				if (soDu%1==0) {
					printf("%d doi duoc:\n%d to 500\n%d to 200\n%d to 100\n%d to 50\n%d to 20\n%d to 10\n%d to 5\n%d to 2\n%d to 1",tien,tien500,tien200,tien100,tien50,tien20,tien10,tien5,tien2,tien1);
				}
				
				soDu -= tien1;
			}
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE5;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			break;
			
			
		CASE6: case 6:
			printf("------------------------------------------------------------------------");
			printf("\nChuc nang 6: TINH LAI SUAT VAY TRA GOP NGAN HANG\n");
			printf("Chuong trinh se cho ra ket qua so tien ban can tra trong 12 thang.\n");
			printf("Lai suat co dinh la 5%/thang va phai tra trong ky han 12 thang.\n\n");
			printf("Nhap so tien ban muon vay: ");
			scanf("%lf",&tien6);
			
			printf("Ky han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
			
			soDu6 = tien6;
			
			for (i=1;i<=12;i++) {
				printf("%d\t",i);
				printf("%.0lf\t\t",soDu6*0.05);
				printf("%.0lf\t\t",tien6/12);
				printf("%.0lf\t\t\t",soDu6*0.05+tien6/12);
				soDu6 -= tien6/12;
				printf("%.0lf\n",soDu6);
			};
			
			do {
					printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
					printf("Nhan 2 de quay lai menu.\n");
					printf("Nhan 3 de thoat chuong trinh.\n");
					printf("Ban muon: ");
					scanf("%d",&again);
				} while (again<1 || again>3);
				
			if (again==1) {
				goto CASE6;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
				
			break;
			
			
		CASE7: case 7:
			printf("-----------------------------------------------------------------------");
			printf("\nChuc nang 7: TINH TIEN VAY MUA XE\n");
			printf("Chuong trinh se cho ra ket qua so tien phai tra lan dau va so tien phai tra hang thang cho den het ky han vay.\n");
			printf("(Tien duoc vay co dinh: 500 trieu VND\n");
			printf("Thoi han vay: 24 nam\n");
			printf("Lai suat co dinh nam: 7.2%%)\n\n");
			
			do {
				printf("Nhap so phan tram ban muon vay (toi da la 100%): ");
				scanf("%f",&vay);
			} while (vay>100 || vay<=0);
			
			printf("So tien phai tra lan dau la: %.2f\n",((float)100-vay)*5);
			
			printf("Ky han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
			tienConLai = vay*5;
	
			
			for (i=1;i<=288;i++) {
				printf("%d\t",i);
				printf("%.2f\t\t",tienConLai*0.006);
				printf("%.2f\t\t",vay*5/288);
				printf("%.2f\t\t\t",tienConLai*0.006+vay*5/288);
				tienConLai -= vay*5/288;
				printf("%.2f\n",round(tienConLai*100)/100);
			}
			
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE7;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			break;
			
			
		CASE8: case 8:
			printf("-----------------------------------------------------------------------");
			printf("\nChuc nang 8: XEP HANG HOC LUC\n");
			printf("Chuong trinh cho ra ket qua thong tin sinh vien, diem, hoc luc sap xep theo thu tu diem giam dan.\n\n");
			
			struct InfoStu {
				char ten[50];
				float diem;
			} arrInfoStu[50];
			
			printf("Nhap so luong sinh vien ban muon xep hang: ");
			scanf("%d",&num1);
			
			for (i=0;i<num1;i++) {
				printf("\nTen cua sinh vien %d: ",i+1);
				scanf("%s",&arrInfoStu[i].ten);
				fflush(stdin);
				printf("Diem cua sinh vien %d: ",i+1);
				scanf("%f",&arrInfoStu[i].diem);
				if (arrInfoStu[i].diem>=9) {
					printf("Hoc luc cua sinh vien %d: Xuat sac\n",i+1);
				} else if (arrInfoStu[i].diem>=8) {
					printf("Hoc luc cua sinh vien %d: Gioi\n",i+1);
				} else if (arrInfoStu[i].diem>=6.5) {
					printf("Hoc luc cua sinh vien %d: Kha\n",i+1);
				} else if (arrInfoStu[i].diem>=5) {
					printf("Hoc luc cua sinh vien %d: Trung binh\n",i+1);
				} else {
					printf("Hoc luc cua sinh vien %d: Yeu\n",i+1);
				}
			}
			
			struct InfoStu temp;
			
			for (i=0;i<num1-1;i++) {
				for (j=i+1;j<num1;j++) {
					if (arrInfoStu[i].diem<arrInfoStu[j].diem) {
						temp = arrInfoStu[i];
						arrInfoStu[i] = arrInfoStu[j];
						arrInfoStu[j] = temp;
					}
				}
			}
			
			printf("\nDanh sach sau khi sap xep theo thu tu diem giam dan.\n");
			for (i=0;i<num1;i++) {
				printf("\nTen cua sinh vien %d: %s\n",i+1,arrInfoStu[i].ten);
				printf("Diem cua sinh vien %d: %.2f\n",i+1,arrInfoStu[i].diem);
				if (arrInfoStu[i].diem>=9) {
					printf("Hoc luc cua sinh vien %d: Xuat sac\n",i+1);
				} else if (arrInfoStu[i].diem>=8) {
					printf("Hoc luc cua sinh vien %d: Gioi\n",i+1);
				} else if (arrInfoStu[i].diem>=6.5) {
					printf("Hoc luc cua sinh vien %d: Kha\n",i+1);
				} else if (arrInfoStu[i].diem>=5) {
					printf("Hoc luc cua sinh vien %d: Trung binh\n",i+1);
				} else {
					printf("Hoc luc cua sinh vien %d: Yeu\n",i+1);
				}
			}
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE8;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
				
			break;
			
			
		CASE9: case 9:
			printf("-----------------------------------------------------------------------");
			printf("\nChuc nang 9: FPOLY-LOTT\n");
			printf("Chuong trinh se cho ra ket qua 2 so ngau nhien va ket qua trung thuong.\n");
			printf("Giai nhat: Trung 2 so.\n");
			printf("Giai nhi: Trung 1 so.\n\n");
			
			do {
				printf("Nhap 2 so may man cua ban (01->15): ");
				scanf("%d%d",&num1,&num2);
			} while (num1<1 || num2<1 || num1>15 || num2>15 || num1==num2);
			
			srand((unsigned) time(&tg));
			
			for (i=0;i<2;i++) {
				kq[i] = rand()%15 + 1;
				if (kq[1]==kq[0]) {
					continue;
				}
			}
			
			dem = 0;
			printf("\nKet qua xo so\n");
			for (i=0;i<2;i++) {
				printf("So thu %d: %d\n",i+1,kq[i]);
				if (kq[i]==num1) {
					dem++;
				}
				if (kq[i]==num2) {
					dem++;
				}
			}
			
			if (dem==2) {
				printf("Chuc mung ban da trung giai nhat!");
			} else if (dem==1) {
				printf("Chuc mung ban da trung giai nhi!");
			} else {
				printf("Chuc ban may man lan sau!");
			}
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE9;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			break;
			
			
		CASE10: case 10:
			printf("-----------------------------------------------------------------------");
			printf("\nChuc nang 10: TINH TOAN\n");
			printf("Chuong trinh se cho ra ket qua tinh tong, hieu, tich, thuong cua 2 phan so.\n\n");
			
			do {
			    printf("Nhap phan so thu nhat (a/b): ");
			    scanf("%d/%d",&tu1,&mau1);
			    printf("Nhap phan so thu hai (c/d): ");
			    scanf("%d/%d",&tu2,&mau2);
			} while (mau1==0 || mau2==0);
			
			printf("\n");
		    printf("Tong hai phan so la: %d/%d\n", tu1*mau2 + tu2*mau1, mau1*mau2);
		    printf("Hieu hai phan so la: %d/%d\n", tu1*mau2 - mau1*tu2, mau1*mau2);
		    printf("Tich hai phan so la: %d/%d\n", tu1*tu2, mau1*mau2);
		    printf("Thuong hai phan so la: %d/%d\n", tu1*mau2, mau1*tu2);
			
			do {
				printf("\n\nNhan 1 de su dung lai chuong trinh.\n");
				printf("Nhan 2 de quay lai menu.\n");
				printf("Nhan 3 de thoat chuong trinh.\n");
				printf("Ban muon: ");
				scanf("%d",&again);
			} while (again<1 || again>3);
			
			if (again==1) {
				goto CASE10;
			} else if (again==2) {
				goto MENU;
			} else {
				goto CASE11;
			}
			
			break;
			
		CASE11: case 11:
			printf("\nCam on ban da su dung chuong trinh!");
			break;
	}
	
	
	
	
	return 0;
}
