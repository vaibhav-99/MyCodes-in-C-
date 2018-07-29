#include<iostream>
using namespace std;

class base
{
public:
base()
{
cout<<"Base\n";
}
};

class derived : public base
{
derived():base()
{
cout<<"Derived";
}
};

main()
{
derived d;
return 0;
}
