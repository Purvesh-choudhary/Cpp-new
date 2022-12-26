#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int on, r, n=0;
    float r2=0.0;
    printf("enter an integer : ");
    scanf("%d",&n);
    on=n;   
    for(on=n; on !=0; ++n)
    {
        on/=10;
    }
    for(on=n; on !=0; on/=10)
    {
        r=on%10;
        r2+=pow(r,n);
    }
    if((int)r2==n)
        printf("%d is Armstrong No.",n);
    else
        printf("%d is Not Armstrong No.",n);
    getch();
    return 0;
}