#include<stdio.h>
int square(int a)
{
    int sq;
    sq=a*a;
    return sq;
}
int main()
{
   int x;
   printf("enter any number: ");
   scanf("%d",&x);
   int sq=square(x);
   printf("output=%d",sq);
   return 0;
}
