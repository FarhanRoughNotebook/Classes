#include<stdio.h>

int main()
{
    // initialise 3 int variables 
    int date;
    int month;
    int year;

    // taking input for 3 variables 
    printf("enter date: ");
    scanf("%d", &date);
    printf("enter month: ");
    scanf("%d", &month);
    printf("enter year: ");
    scanf("%d", &year);

    // printing date finally
    printf("today is %d/%d/%d\n", date, month, year);
    printf("end of code\n");
}