#include <stdio.h>

int main(){
    int real,reminder,reversed=0,val;

    printf("enter value: ");
    scanf("%d",&real);


    real=val;


    while (val!=10) {
        reminder = val%10;
        reversed = reversed*10 + reminder;
        val /=10;
    }


    if (real == reversed)
    {
        printf("value is palindrome");
    }else
    {
        printf("value is not palindrome");
    }
    
    return 0;
}