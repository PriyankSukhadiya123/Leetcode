#include<stdio.h>
#include<string.h>

int main(){

    char s[20];
    
    scanf("%s",&s);
    printf("%s \n",&s);

    int length = strlen(s);

    for (char i = length+1 ; i >=0 ; i--)
    {
        char c = s[i];
        printf("%c",c);
    }
    

}