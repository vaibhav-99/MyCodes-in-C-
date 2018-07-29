#include<stdio.h>
int main
{
int j=0,k;
if(j==0)
goto label;

for(k=0 ; k<3 ; k++)
{
printf("hi\n");
label:
 k=printf("%03d",j);
}
}
