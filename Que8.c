#include<stdio.h>
int main()
{
    int num;
    printf("Enter number of times you want to print ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        printf("%d square is %d\n",i,i*i);
}