#include<stdio.h>
#include<math.h>

int main()
{
    int base,power,ans;
    printf("Enter the Base value of X = ");
    scanf("%d",&base);
    printf("Enter the Power raised value of X = ");
    scanf("%d",&power);
    ans=pow(base,power);
    printf("Ans of %d^%d=%d",base,power,ans);
}