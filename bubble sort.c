#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],temp,swap=0;
    for(int i=0 ; i<n ; i++)
      scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
    {
      int ptr=0;
      while(ptr<n-i-1)
      {
        if(a[ptr]>a[ptr+1])
        {
          swap++;
          temp=a[ptr];
          a[ptr]=a[ptr+1];
          a[ptr+1]=temp;
        }
         ptr++;
      }
    }
   printf("Array is sorted in %d swaps.\n",swap);
   printf("First Element: %d\nLast Element: %d",a[0],a[n-1]);
    return 0;
}
