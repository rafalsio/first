#include <iostream>

using namespace std;

struct A
{
//    virtual ~A (){cout << "~A" << endl;}
    virtual void foo(){cout << "aa" << endl;}
};

struct B:A
{
//    ~B (){cout << "~B" << endl;}
    void foo() override {cout << "bb" << endl;}
};

struct C:B
{
//    ~C (){cout << "~C" << endl;}
    void foo() override {cout << "cc" << endl;}
};

int main()
{
//    B* ptr = new C ();
//    delete ptr;
//    return 0;

A* tab[3];
tab[0] = new A();
tab[1] = new B();
tab[2] = new C();

for (auto index : tab)
    index->~A();
for (A* index : tab)
    index->foo();


A* ptr = new C();
ptr->foo();

tab[2]->foo();

cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
A tabOb[4];
A oA = A();
B oB{};
C oC;
tabOb[0] = oA;
tabOb[1] = oB;
tabOb[2] = oC;
tabOb[3] = C();
for (auto in : tabOb)
    in.foo();

cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
oC.foo();
tabOb[3].foo();
cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;






}
