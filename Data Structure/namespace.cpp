#include <bits/stdc++.h>
using namespace std;

// namespace std{
//     cout;
// }

int x = 10, y, z;

int func(int a, int b)
{
    return a + b;
}

namespace info
{
    int x = 100;
    int func(int a, int b)
    {
        return a * b;
    }

}

int main()
{
    int a = 5, b = 4;
    int x = info::func(a, b);
    cout << x << "\n";
    return 0;
}