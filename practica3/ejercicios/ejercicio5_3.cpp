#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // cout << "a)----------------------------------------\n";
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "i= " << i << endl;
    //     for (int j = i; j >= 1; j - 2)
    //         cout << "j=" << j << endl;
    // }

    // cout << "b)----------------------------------------\n";
    // for (int i = 3; i > 0; i--)
    //     for (int j = 1; j <= i; j++)
    //         for (int k = i; k >= j; k--)
    //             cout << i << j << k << endl;

    cout << "c)----------------------------------------\n";
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
        {
            for (int k = i; k <= j; k++)
                cout << i << j << k << endl;
            cout << endl;
        }
    return 0;
}
