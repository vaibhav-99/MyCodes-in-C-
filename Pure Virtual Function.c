#include <iostream>
using namespace std;
class shape
{
 virtual float area() = 0;

 public:
 bool isBigger(shape &s)
 {
  area();  //circle's area
  s.area(); // shape's area
  if(area() > s.area())
   return true;
  return false;
 }
};
class rect : public shape
{
  float h,w,x,y;
  public:
  rect(float h1=0, float w1=0, float x1=0, float y1=0)
  {
    h = h1;
    w = w1;
    x = x1;
    y = y1;
  }
  float area()
  {
    cout<<"Rectangle's Area\n";
    return h*w;
  }
};
class circ : public shape
{
  float r,x,y;
  public:
  circ(float r1=0, float x1=0, float y1=0)
  {
    r = r1;
    x = x1;
    y = y1;
  }
  float area()
  {
    cout<<"Circle's Area\n";
    return 3.14*r*r;
  }
};
class triang : public shape
{
 float b,h;
  public:
 triang(float b1, float h1)
 {
     b=b1;
     h=h1;
 }
 float area()
 {
  return 0.5*b*h;
 }
};
int main()
{
 circ c1(5.0,6.0,7.0);
 rect r1(5.0,66.0,4.0,2.0);
 //r1.area();
 //shape s;
 //s.isBigger(r1);
  if(c1.isBigger(r1))
     cout<<"Circle is Bigger\n";
    else
     cout << "Rectangle is Bigger\n";

   if(r1.isBigger(c1))
     cout<<"Circle is Bigger\n";
    else
     cout << "Rectangle is Bigger\n";

    if(c1.isBigger(c1))
     cout<<"Circle is Bigger\n";
    else
     cout << "Rectangle is Bigger\n";

    if(r1.isBigger(r1))
     cout<<"Circle is Bigger\n";
    else
     cout << "Rectangle is Bigger\n";
     triang t1(10.0,2.0);
     cout<<t1.area()<<endl;
 return 0;
}
