#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        getline(cin, s[i]);
    for (string ss : s)
        cout << ss << endl;
    return 0;
}