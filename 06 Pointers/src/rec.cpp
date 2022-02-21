#include <iostream>

using namespace std;

void fun(int a)
{
    if (a == 0)
        return;
    a++;
    cout << "a = " << a << endl;
    fun(a);
}

int main(int argc, char const *argv[])
{
    fun(5);
    return 0;
}
