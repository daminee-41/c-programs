#include<stdio.h>
int main()
{
int a=1,b;
b=sizeof(++a);
printf("resultant values of a and b are\n");
printf("%d %d ", a,b);
return 0;
}