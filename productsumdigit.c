#include<stdio.h>

int subtractProductAndSum(int n) {
    
    int reminder,sum=0,val1;

    val1=n;

    while (val1!=0){
        reminder = val1%10;
        sum = sum + reminder;
        val1 /=10;
    }
    
    int remind2,mul=1,val2;

    val2=n;

    while (val2!=0)
    {
        remind2 = val2%10;
        mul = mul*remind2;
        val2 /=10;
    }
    
    int out = mul - sum;
    printf("%d sum and %d mul",sum,mul);
    return out;

}

int main(){
    int n;
    printf("enter value :");
    scanf("%d",&n);

    int out = subtractProductAndSum(n);

    printf("%d",out);

}
