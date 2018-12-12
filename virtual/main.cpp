#include <iostream>

using namespace std;

struct A
{
   ~A (){cout << "~A";}
};

struct B:A
{
   virtual ~B (){cout << "~B";}
};

struct C:B
{
    ~C (){cout << "~C";}
};

int main()
{
    B* ptr = new C ();
    delete ptr;
    return 0;
}
