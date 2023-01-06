#include <bits/stdc++.h>
using namespace std;
// from here the main code start
// /askdfjksah
int main()
{
    int n;
    cin >> n;
    int ara[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }

    int sum = 0, multiple = 1;
    for (int i = 0; i < n; i++)
    {
        // cout << ara[i] << " ";
        sum += ara[i];
        multiple *= ara[i];
    }

    cout << "The summation is: " << sum << endl;
    cout << "The multiplication is: " << multiple << endl;

    return 0;
}