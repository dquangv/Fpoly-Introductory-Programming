//ASM1

#include <stdio.h>

int main() {
	
	int choice, hour_start, hour_end, consume_ele, check11=2, flag11=0, check12=2, flag12=0;
	long fee_karaoke;
	float arr_ele[6] = {1.678, 1.734, 2.014, 2.536, 2.834, 2.927}, num;
	
	do {
		printf("*-------------------------------------------------------*\n");
		printf("|\tCHAO MUNG BAN DEN VOI CHUONG TRINH!\t\t|\n");
		printf("|\t(Chuong trinh bao gom 10 chuc nang)\t\t|\n");
		printf("|\t\t\t\t\t\t\t|\n");
		printf("|Chuc nang 1: Kiem tra so nguyen\t\t\t|\n");
		printf("|Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\t|\n");
		printf("|Chuc nang 3: Tinh tien thue phong hat karaoke\t\t|\n");
		printf("|Chuc nang 4: Tinh tien dien\t\t\t\t|\n");
		printf("|Chuc nang 5: Doi tien\t\t\t\t\t|\n");
		printf("|Chuc nang 6: Tinh lai suat vay tra gop ngan hang\t|\n");
		printf("|Chuc nang 7: Tinh tien vay mua xe\t\t\t|\n");
		printf("|Chuc nang 8: Xep hang hoc luc\t\t\t\t|\n");
		printf("|Chuc nang 9: FPOLY-LOTT\t\t\t\t|\n");
		printf("|Chuc nang 10: Tinh toan phan so\t\t\t|\n");
		printf("|Chuc nang 11: Thoat khoi chuong trinh\t\t\t|\n");
		printf("*-------------------------------------------------------*\n");
		printf("Moi ban chon chuc nang muon su dung (1->11): ");
		
		scanf("%d",&choice);
	} while (choice<1 || choice>11);
	
	printf("\n");
	
	switch (choice) {
		
		
		case 1:
			printf("Chuc nang 1: KIEM TRA SO NGUYEN\n");
			break;
			
			
		case 2:
			printf("Chuc nang 2: TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO\n");
			break;
			
			
		case 3:
			printf("Chuc nang 3: TINH TIEN HAT KARAOKE\n");
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
			
			
			if (hour_start>=14 && hour_start<=16) {
				if ((hour_end-hour_start)>3) {
					printf("Tong thiet hai cua ban la %.0f dong",(150000*3+(hour_end-hour_start-3)*150000*0.7)*0.9);
				} else {
					printf("Tong thiet hai cua ban la %.0f dong",(hour_end-hour_start)*150000*0.9);
				}
			} else {
				if ((hour_end-hour_start)>3) {
					printf("Tong thiet hai cua ban la %.0f dong",150000*3+(hour_end-hour_start-3)*150000*0.7);
				} else {
					printf("Tong thiet hai cua ban la %d dong",150000*(hour_end-hour_start));
				}
			}
			
			printf("\nChuc ban co mot trai nghiem thu vi tai day!");
			break;
			
			
		case 4:
			printf("Chuc nang 4: TINH TIEN DIEN\n");
			printf("Bang gia\n");
			printf("Bac 1\t 0 - 50 kWh\t\t 1.678 (dong/kWh)\n");
			printf("Bac 2\t 51 - 100 kWh\t\t 1.734 (dong/kWh)\n");
			printf("Bac 3\t 101 - 200 kWh\t\t 2.014 (dong/kWh)\n");
			printf("Bac 4\t 201 - 300 kWh\t\t 2.536 (dong/kWh)\n");
			printf("Bac 5\t 301 - 400 kWh\t\t 2.834 (dong/kWh)\n");
			printf("Bac 6\t 401 kWh tro len\t 2.927 (dong/kWh)\n\n");	
			
			do {
				printf("So kWh ban da dung trong thang vua qua: ");
				scanf("%d",&consume_ele);
			} while (consume_ele<=0);
			
			if (consume_ele<=50) {
				printf("Tong thiet hai cua ban la %.3f dong",consume_ele*arr_ele[0]);
			} else if (consume_ele<=100) {
				printf("Tong thiet hai cua ban la %.3f dong",50*arr_ele[0]+(consume_ele-50)*arr_ele[1]);
			} else if (consume_ele<=200) {
				printf("Tong thiet hai cua ban la %.3f dong",50*arr_ele[0]+50*arr_ele[1]+(consume_ele-100)*arr_ele[2]);
			} else if (consume_ele<=300) {
				printf("Tong thiet hai cua ban la %.3f dong",50*arr_ele[0]+50*arr_ele[1]+100*arr_ele[2]+(consume_ele-200)*arr_ele[3]);
			} else if (consume_ele<=400) {
				printf("Tong thiet hai cua ban la %.3f dong",50*arr_ele[0]+50*arr_ele[1]+100*arr_ele[2]+100*arr_ele[3]+(consume_ele-300)*arr_ele[4]);
			} else {
				printf("Tong thiet hai cua ban la %.3f dong",50*arr_ele[0]+50*arr_ele[1]+100*arr_ele[2]+100*arr_ele[3]+100*arr_ele[4]+(consume_ele-400)*arr_ele[5]);
			}
			
			printf("\nNho dong tien khong thoi bi cup dien nha ma!");
			break;
			
		case 5:
			printf("Chuc nang 5: DOI TIEN\n");
			break;
			
			
		case 6:
			printf("Chuc nang 6: TINH LAI SUAT VAY TRA GOP NGAN HANG\n");
			break;
			
			
		case 7:
			printf("Chuc nang 7: TINH TIEN VAY MUA XE\n");
			break;
			
			
		case 8:
			printf("Chuc nang 8: XEP HANG HOC LUC\n");
			break;
			
			
		case 9:
			printf("Chuc nang 9: FPOLY-LOTT\n");
			break;
			
			
		case 10:
			printf("Chuc nang 10: TINH TOAN\n");
			break;
			
			
		case 11:
			break;
	}
	
	
	
	
	return 0;
}
