#include<stdio.h>
#include<conio.h>

void main ()
{
    int list[50];
    int num,i,j,temp;
    printf("Enter total number of elements in an array ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter Element %d\t",i+1);
        scanf("%d",&list[i]);
    }   
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if(list[j]>list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    printf("\n Lint in the sorted order\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",list[i]);
        getch;
    }
}