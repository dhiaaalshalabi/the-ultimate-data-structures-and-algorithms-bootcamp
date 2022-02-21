#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};
    cout << x[1][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << x[i][j];
        }
    }

    return 0;
}
