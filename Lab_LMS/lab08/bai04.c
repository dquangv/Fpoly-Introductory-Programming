//Viet chuong trinh nhap thong tin danh sach xe cua mot cong ty van tai va xuat ra thong tin co gia xe cao nhat

#include <stdio.h>
#include <string.h>

struct vehicle {
	char cCode[20], cColor[20];
	int nPrice, nSeat, nWeight;
};

void infoVehicle(int num, struct vehicle arrVehicle[]) {
	int i;
	for (i=0;i<num;i++) {
		printf("\nInfo of vehicle %d\n",i+1);
		printf("Code: ");
		scanf("%s",arrVehicle[i].cCode);
		printf("Color: ");
		scanf("%s",arrVehicle[i].cColor);
		printf("Price: ");
		scanf("%d",&arrVehicle[i].nPrice);
		printf("Seat: ");
		scanf("%d",&arrVehicle[i].nSeat);
		printf("Weight: ");
		scanf("%d",&arrVehicle[i].nWeight);
	}
	
}

void infoVehicle_maxPrice(int num, struct vehicle arrVehicle[]) {
	int i;
	int max = arrVehicle[0].nPrice;
	for (i=1;i<num;i++) {
		if (max<arrVehicle[i].nPrice) {
			max=arrVehicle[i].nPrice;
		}
	}
	
	for (i=0;i<num;i++) {
		if (max==arrVehicle[i].nPrice) {
			printf("\nInfo of vehicle %d\n",i+1);
			printf("Code: %s\n",arrVehicle[i].cCode);
			printf("Color: %s\n",arrVehicle[i].cColor);
			printf("Price: %d\n",arrVehicle[i].nPrice);
			printf("Seat: %d\n",arrVehicle[i].nSeat);
			printf("Weight: %d",arrVehicle[i].nWeight);
		}
	}
	
}

int main() {
	
	int num;
	printf("Enter the number of vehicle: ");
	scanf("%d",&num);
	
	struct vehicle arrVehicle[num];
	
	infoVehicle(num,arrVehicle);
	
	infoVehicle_maxPrice(num,arrVehicle);
	
	
	return 0;
}
