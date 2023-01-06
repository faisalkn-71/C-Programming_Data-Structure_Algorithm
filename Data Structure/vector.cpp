#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> ara;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Before push: " << ara.size() << endl;
    //     ara.push_back(i);
    //     cout << "After  push: " << ara.size() << endl;
    // }

    // ara.insert(ara.begin() + 1, 1000);

    // for (int i = 0; i < ara.size(); i++)
    // {
    //     cout << ara[i] << " ";
    // }

    // cout << " After Delete:" << endl;
    // ara.erase(ara.begin() + 0);
    // for (int i = 0; i < ara.size(); i++)
    // {
    //     cout << ara[i] << " ";
    // }

    vector<int> a = {1, 2, 3, 4, 5};

    a.resize(10);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}