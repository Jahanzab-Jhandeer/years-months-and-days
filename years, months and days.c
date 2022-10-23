#include<stdio.h>
/* convert a given integer (in days) to years, 
months and days, assumes assumes that all months have 30 days 
and all years have 365 days.*/
int main () {
    int years, months, days;

    printf("Input days : ");
    scanf("%d" , &days);

    years = days / 365;
    days = days % 365;

    months = days / 30;
    days = days % 30;

    days = days % 30;

    printf("YY:MM:DD : %d:%d:%d" , years,months,days);

    printf("\n");
return 0;
}