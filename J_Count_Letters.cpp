#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<int> count(26, 0);
    for (int i = 0; i < str.size(); i++)
        count[str[i] - 97]++;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            cout << char(i + 97) << " : " << count[i] << endl;
    }
    return 0;
}