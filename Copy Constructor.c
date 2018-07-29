#include<iostream>
using namespace std;

class MyClass
{
 int x;
 public:
 MyClass() {}
 MyClass(int x) {this->x = x;}
 MyClass(const MyClass &obj)
  {
    this->x = obj.x;
  }
 void display()
  {
    cout<<x<<endl;
  }
};

int main()
{
 MyClass m1,m2(10),m3(m2);
  m1.display();
  m2.display();
  m3.display();
}
