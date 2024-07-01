
#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 10; ++x)
    {

        //inner loop

        for (int y = 1; y <= x; ++y)
        {
            cout << y;

        }
        cout << endl;
    }
}

