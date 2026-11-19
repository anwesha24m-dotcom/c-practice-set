//w.a.c program to print the average of 3 numbers//
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d %d %d", &a, &b, &c);
    int avg=(a+b+c)/3;
    printf("%d is the average number",avg);
    return 0;
}
