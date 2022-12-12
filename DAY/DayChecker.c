#include<stdio.h>
#include<conio.h>

void main()
{
    int day;
    printf("Enter any date of January 2023 = ");
    scanf("%d",&day);
    if(day%7==1) printf("\nThere is Sunday on %d of January, 2023",day);    
    else if(day%7==2) printf("\nThere is Monday on %d of January, 2023",day);
    else if(day%7==3) printf("\nThere is Tuesday on %d of January, 2023",day);
    else if(day%7==4) printf("\nThere is Wednesday on %d of January, 2023",day);
    else if(day%7==5) printf("\nThere is Thursday on %d of January, 2023",day);
    else if(day%7==6) printf("\nThere is Friday on %d of January, 2023",day);
    else if(day%7==0) printf("\nThere is Saturday on %d of January, 2023",day);
    getch();
}