#include<stdio.h>
int main() {
 int temp,num1,num,j;

        printf("enter the number");
        scanf("%d",&num);
    num1=num;
    temp=0;
    while(num>0){
     j=num%10;
     temp=temp+(j*j*j);
     num=num/10;
    }
    if(temp==num1) 
    {
     printf("%d is armstrong number\n");
    }
    else{
     printf("%d is not armstrong number\n");
    }
    
 
    return 0;
}

