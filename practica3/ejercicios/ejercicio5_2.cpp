#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "a)-----------------------------------------------\n";
    for (int i = 0; i < 10; i++)
        cout << " 2 * " << i << " = " << 2 * i << endl;

    cout << "b)-----------------------------------------------\n";

    for (int i = 0; i <= 5; i++)
        cout << 2 * i + 1 << " \n";

    cout << "c)-----------------------------------------------\n";
    for (int i = 1; i < 4; i++)
    {
        cout << i;
        for (int j = i; j >= 1; j--)
            cout << j << endl;
    }

    return 0;
}
