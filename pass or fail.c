/*w.a.c program to check if a student passed or failed 
marks>30 is pass
marks<=30 is fail 
*/
#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if( marks>30){
        printf("student passed\n");
    } else {
            printf("student failed\n");
    }
      return 0;
    }
