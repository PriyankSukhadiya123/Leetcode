#include<stdio.h>

void main(){
    int real,reminder,reversed=0,val;

    printf("enter value: ");
    scanf("%d",&real);

    printf("%d",real);

    real=val;


    while (val!=10)
    {
        reminder = val%10;
        reversed = reversed*10 + reminder;
        val = val/10;
    }

    printf("reverse \n%d",reversed);
}