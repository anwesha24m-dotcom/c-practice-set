//w.a.c program to calculate area of a circle//
#include <stdio.h>
int main()
{
	float r , area;
	float pi=22/7;
	printf("enter the value or radius:");
	scanf("%f",&r);
	area= pi*r*r;
	printf("area of circle is %f\n",area);
	return 0;
