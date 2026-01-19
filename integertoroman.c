#include<stdio.h>
#include<string.h>

char* intToRoman(int num) {
    static char out[20];
    out[0] = '\0';

    int i=0;
    int values[] ={1000,900,500,400,100,90,50,40,10,9,5,4,1};

    char *symbol[] ={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  

    while (num>0)
    {
            if (num>=values[i])
            {
                strcat(out,symbol[i]);
                num -=values[i];
            }else{
                i++;    
            }  
    }
    return out;
}


int main(){
    int num;
    
    printf("enter value in roman :");
    scanf("%d",&num);
    
    char *out =  intToRoman(num);

    printf("output is %s \n", out);

    return 0;
}