#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Saturday\n";
        break;

    case 2:
        cout << "Sunday\n";
        break;

    case 3:
        cout << "Monday\n";
        break;

    case 4:
        cout << "Tuesday\n";
        break;

    case 5:
        cout << "Wednesday\n";
        break;

    case 6:
        cout << "Thursday\n";
        break;

    default:
        cout << "Friday\n";
        break;
    }
}