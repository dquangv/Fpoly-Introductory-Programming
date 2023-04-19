//Viet chuong trinh xac dinh nam nhuan

#include <stdio.h>

int checkYear(int year) {
	if (year%400==0 || (year%4==0 && year%100!=0)) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (checkYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

