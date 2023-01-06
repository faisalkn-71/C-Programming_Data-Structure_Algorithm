#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "I am eating rice.";
    string str2 = "I am also eating latus soup.";

    string str3 = str + str2;
    // cout << str3;
    // cout << str3.size();
    // cout << str3[0] << " " << str3[5];
    // str3.pop_back();
    // str3.erase(str3.begin() + 1);
    // cout << str3;

    // for (int i = 0; i < str3.size(); i++)
    // {
    //     str3[i] = str3[i] + 1;
    // }

    for (int i = 0; i < str3.size(); i++)
    {
        if (str3[i] >= 'a' && str3[i] <= 'z')
        {
            str3[i] -= 32;
        }
        else if (str3[i] >= 'A' && str3[i] <= 'Z')
        {
            str3[i] += 32;
        }
    }
    cout << str3;

    return 0;
}