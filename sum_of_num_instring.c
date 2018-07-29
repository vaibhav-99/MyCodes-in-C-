#include<stdio.h>
int main()
{
 char str[100];
 printf("Enter a string:");
 gets(str);
 int num=0,sum=0,i;
 for(i=0 ; str[i]!='\0' ;  )
 {
   if(str[i]>='0' && str[i]<='9')
   {
     int temp = i;
     num=0;
        while(str[temp]>='0' && str[temp]<='9')
        {
         num = num*10 + (str[temp]-'0');
         temp++;
        }
      sum += num;
      i = temp;
   }
   else
    i++;
 }
 printf("%d",sum);
}
