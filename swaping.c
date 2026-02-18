#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);

    printf ("before swapping a=%d,b=%d",a,b);

    c=a;
    a=b;
    b=c;

    printf("after swapping a=%d,b=%d",a,b);

    return 0;

}