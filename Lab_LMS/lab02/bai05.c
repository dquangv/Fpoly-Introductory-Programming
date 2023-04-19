//Viet chuong trinh nhap mot so nguyen cua the ky va chuyen doi no

#include <stdio.h>

int main() {
	int cens;
	float years, days;
	double hours, mins, seconds, milliseconds;
	printf("Input century: ");
	scanf("%d",&cens);
	years = cens*100;
	days = years*365.24;
	hours = days*24;
	mins = hours*60;
	seconds = mins*60;
	milliseconds = seconds*1000;
	printf("%d centuries = %.0f years = %.0f days = %.0f hours = %.0f mins = %.0f seconds = %.0f milliseconds",cens,years,days,hours,mins,seconds,milliseconds);
	
	return 0;
}
