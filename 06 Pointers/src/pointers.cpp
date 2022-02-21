#include <iostream>
using namespace std;

int myFun()
{
    return 10;
}

int main(int argc, char const *argv[])
{
    int var0 = 5;
    int *pointerVar0 = new int();
    pointerVar0 = &var0;
    cout << "var0: " << var0 << endl;
    cout << "pointerVar0: " << pointerVar0 << endl;
    cout << "ref for var0: " << &var0 << endl;
    *pointerVar0 = 10;
    int a = myFun();
    cout << "var0: " << var0 << endl;
    cout << "pointerVar0: " << pointerVar0 << endl;
    return 0;
}
