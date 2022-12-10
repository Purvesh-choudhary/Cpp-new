#include<stdio.h>
#include<conio.h>

int main ()
{
    int list[50];
    int num,i,j,min,temp;
    printf("Enter total number of elements in an array ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter Element %d\t",i+1);
        scanf("%d",&list[i]);
    }   
    for(i=0;i<num-1;i++)
    {
        min=i;
        for(j=i+1;j<num;j++)
        {
            if(list[j]<list[min])
            {
                min=j;
            }
        }
        temp=list[i];
        list[i]=list[min];
        list[min]=temp;
    }
    printf("\n List in the sorted order\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t",list[i]);
        getch;
    }
}