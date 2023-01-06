#include <bits/stdc++.h>
using namespace std;

string erase_first_last(string str)
{
    str.pop_back();
    str.erase(str.begin());

    return str;
}

void erase_first_last2(string &str)
{
    str.pop_back();
    str.erase(str.begin());

    cout << "from erase function: " << str << endl;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    // string str;
    // cin >> str;

    // // string ans = erase_first_last(str);

    // erase_first_last2(str);

    // // cout << ans2 << endl;
    // cout << str << endl;

    int a, b;
    cin >> a >> b;
    swap(a, b);

    cout << a << " " << b;

    return 0;
}