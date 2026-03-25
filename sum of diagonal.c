#include <stdio.h>
int main () {
int a[50][50],n,sum=0,i,j;
printf("enter the order of matrix");
scanf("%d",&n);
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
    printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
}
}
 for (i=0;i<n;i++) {
     for (j=0;j<n;j++) {
         if (i==j) {
             sum=sum + a[i][j] ;
            
         }
     }
 }
 printf("sum of diagonal elements elements is:%d\n",sum);

return 0;
}
