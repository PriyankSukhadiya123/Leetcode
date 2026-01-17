#include<stdio.h>



int countOdds(int low, int high){

    int count=0;

    for (int i = low; i <= high ; i++)
    {
        if (i%2==1)
        {
            count++;
        }
    }
    
    return count;
}

int main(){
    int low,high;

    printf("enter value of low :");
    scanf("%d",&low);
    printf("enter value of high :");
    scanf("%d",&high);
    
    int count = countOdds(low,high);

    printf("%d",count);

}