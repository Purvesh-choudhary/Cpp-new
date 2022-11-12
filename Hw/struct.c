#include<stdio.h>
#include<conio.h>

struct player{
  char name[20];
  int age;
};
void generate();

int main() 
{
    int number= 2;
    printf("Number of players: ");
    scanf("%d",&number);
    generate(number);
    printf("There are %d players",number);
}

void generate(int number)
{
    int i=0;
    for(i;i<number;i++)
    {
        struct player sp[i];
        printf("Structure for player_%d was created\n", i+1);
        printf("Name: ");
        scanf("%s",sp[i].name);
        printf("%s\n",sp[i].name);
    }
}