#include <iostream>
using namespace std;
class myclass
{
int *p;
int a;
public:
myclass()
{
cout << "consturctor called";
}
};

int main()
{
myclass obj;
return 0;
}
