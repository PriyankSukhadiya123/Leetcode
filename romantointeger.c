#include<stdio.h>
#include<string.h>

int romanToInt(char* s) {
    
    int out=0;

    for (int i = 0; s[i] != '\0' ; i++)
    {
         if (s[i]== 'I' && s[i+1]== 'V')
        {
            out = out+4;
            i++;
        }
        else if (s[i]== 'I' && s[i+1]== 'X')
        {
            out = out+9;
            i++;
        }
        else if (s[i]== 'X' && s[i+1]== 'L')
        {
            out = out+40;
            i++;
        }
        else if (s[i]== 'X' && s[i+1]== 'C')
        {
            out = out+90;
            i++;
        }
        else if (s[i]== 'C' && s[i+1]== 'D')
        {
            out = out+400;
            i++;
        }
        else if (s[i]== 'C' && s[i+1]== 'M')
        {
            out = out+900;
            i++;
        }
        else if (s[i]== 'M')
        {
            out = out+1000;
        }
        else if (s[i]== 'D')
        {
            out = out+500;
        }
        else if (s[i]== 'C')
        {
            out = out+100;
        }
        else if (s[i]== 'L')
        {
            out = out+50;
        }
        else if (s[i]== 'X')
        {
            out= out+10;
        }
        else if (s[i]== 'V')
        {
            out = out+5;
        }
        else if (s[i]== 'I')
        {
            out++;
        }
       
    }
    
   
    return out;

}
int main(){
    char s[20];
    int out;

    printf("enter value in roman :");
    scanf("%s",s);
    out =  romanToInt(s);

    printf("output is %d",out);

    return 0;
}