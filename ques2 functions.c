#include<stdio.h>
#include<math.h>
int subtraction(int num1,int num2)
{
    int difference;
    difference=num1-num2;
    return difference;

}
int main()
{
    int var1,var;
    printf("enter two numbers: ");
    scanf("%d%d",&var1,&var);
    int difference=subtraction(var1,var);
    printf("output=%d",difference);
}
