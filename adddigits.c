#include<stdio.h>

int addDigits(int num) {
    int reminder,sum=0;

    while (num!= 0 || sum>9)
    {
        if (num==0)
        {
            num=sum;
            sum=0;
        }
        
        reminder = num%10;
        sum = sum + reminder;
        num /=10;
        
    }
    
    

    return sum;

}

int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    int sum = addDigits(num);

    printf("%d",sum);
}