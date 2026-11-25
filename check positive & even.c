//w.a.c program to check a number is positive &even at the same time or not
#include <stdio.h>
int main(){
int number;
printf("enter the number:");
scanf("%d",&number);
if(number>=0){
    printf("positive number\n");
    if(number%2==0){
     printf("even number\n");
} else {
    printf("negative number\n");
    }
 }else{
    printf("odd number\n");
}
    return 0;
}    
