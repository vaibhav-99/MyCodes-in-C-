#include<stdio.h>
//#kaha_gya_use_dhoondo

int main()
{
printf("Enter Size of Array : ");
int n,swap=0;
scanf("%d",&n);
int a[n];
printf("Enter elements of Array (in ascending order):");
for(int i=0 ; i<n ; i++)
 scanf("%d",&a[i]);
int item;

for(int i=0 ; i < n-1 ; i++)
 {
  for(int ptr=0 ; ptr < n-i-1 ; ptr++)
  {
    if(a[ptr] > a[ptr+1])
    {
     int temp = a[ptr];
     a[ptr] = a[ptr+1];
     a[ptr+1] = temp;
     swap++;
    }
  }
 }
if(swap!=0)
{
printf("Array was to supposed to be entered in Ascending Order! :(\n");
printf("Sorted Array : ");
for(int i=0 ; i<n ; i++)
 printf("%d ",a[i]);
}
printf("\nEnter element to be searched : ");
scanf("%d",&item);

int beg=0,end=n,mid;
mid = (beg + end)/2;

while(beg<=end && a[mid]!=item)
{
 if(item < a[mid])
  end = mid-1;

 else
  beg = mid+1;

 mid = (beg+end)/2;
}

if(a[mid]==item)
 printf("Element found at : %d",mid+1);

else
 printf("Element Not Found!");
return 0;
}
