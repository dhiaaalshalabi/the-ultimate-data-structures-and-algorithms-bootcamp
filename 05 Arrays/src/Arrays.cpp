#include <iostream>
using namespace std;

int main()
{
    int counts[4];
    int scors[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Enter Numbers :";

    for (const int &c : counts)
    {
        cout << c;
    }

    for (int i = 0; i < sizeof(counts) / sizeof(counts[0]); i++)
    {
        cin >> counts[i];
    }

    for (int i = 0; i < sizeof(counts) / sizeof(counts[0]); i++)
    {
        cout << counts[i];
    }

    return 0;
}

int sum(int arr[])
{
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int avarage(int sum, int count)
{
    return sum / count;
}