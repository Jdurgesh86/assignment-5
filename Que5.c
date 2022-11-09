#include<stdio.h>
int main()
{
    int num;
    printf("Enter number of times you want to print ");
    scanf("%d",&num);
    while(num)
    {
        printf("%d\n",2*num-1);
        num--;
    }
}