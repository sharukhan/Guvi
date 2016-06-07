#include <stdio.h>

int main(void) {
int num;
scanf("%d",&num);
if(num==0)
{
	printf("\nthe number is zero..");
}
else if(num>0)
{
	printf("\nthe number is positive..");
}
else if(num<0)
{
	printf("\nthe number is negative");
}
	return 0;
}
