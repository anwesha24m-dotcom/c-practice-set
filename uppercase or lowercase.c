//w.a.p to find a character entered by user is upper case or not
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("upper case\n");
    }else if ( ch>='a' && ch<='z'){
        printf("lower case\n");
    }else{
        printf("not an english alphabet\n");
    }
    return 0;
}
