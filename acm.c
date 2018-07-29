#include<stdio.h>
#define ROW 20
#define COL 10
/*int main()
{/*
int (*ptr)[ROW][COL];
printf("%d\n",sizeof(*ptr));
getchar();
printf("%d",sizeof(int));
int a[2][2] = { {1, 2} , {3, 4} };
printf("%d",*(*(a+1)+1));    */                // *(*(a+i)+j) = a[i][j]
#include<stdio.h>

int main()
{
char *str ="pointer";
printf("%*.*s",10,4,str);
    /*switch(1+"AB""CD"+1){
        case 'A':printf("among");
          break;
        case 'B':printf("after");
          break;
          case 'C':printf("above");
          break;
          case 'D':printf("below");
          break;
    }
    return 0;*/

}

