//****************Call by reference*******************
#include <stdio.h>  
void swap(int *, int *); //prototype of the function   
int main()  
{  
    int a = 10, b = 20;   
    printf("Before swap (main) a = %d, b = %d\n",a,b); // printing the value of a and b in main  
    swap(&a,&b);  
    printf("After  swap (main) a = %d, b = %d\n",a,b); // The values of actual parameters do change in call by reference, a = 10, b = 20  
}  
void swap (int *a, int *b)  
{  
    int temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After  swap (func) a = %d, b = %d\n",*a,*b); // Formal parameters, a = 20, b = 10   
}  
