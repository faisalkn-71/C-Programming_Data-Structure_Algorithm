#include <bits/stdc++.h>

// #include <iostream>
// #include <fstream>

using namespace std;

int main()
{
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    of << "Hello World\n";
    of2 << "Hello World from OF2\n";

    ifstream ifs;
    ifs.open("0.txt");
    int x;
    double y, z;
    char ch;

    ifs >> x >> y >> z >> ch;

    cout << x << " " << y << " " << z << " " << ch;

    ifs.close();
    of.close();
    of2.close();

    return 0;
}