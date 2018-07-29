#include<iostream>
using namespace std;

struct student{
char name[20];
int age;
};

class student{
public:
char name[20];
int age;
};

int main()
{
  student s1;
  return 0;
}
