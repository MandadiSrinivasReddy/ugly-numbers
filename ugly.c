#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int IsUglyNumber(int num)
{
   while(num%2==0)
    num=num/2;
     while(num%3==0)
        num=num/3;
    while(num%5==0)
        num=num/5;
    return num==1?1:0;
}
void FindUglyNumber(int N)
{
int number=1;
    int i=1;
    while(N>number)
    {
        i++;
        if(IsUglyNumber(i))
        {
            number++;
        }
}
    printf("Ugly number = %d",i);
}
int main()
{
   long int N; 
    printf("Which Ugly Number :\n");
    scanf("%ld",&N);
    if(N<1)
    {
        printf("enter a positive number");
    }
    else
    FindUglyNumber(N);
    return 0;
}

 
     
