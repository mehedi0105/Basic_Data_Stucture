#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> s;
    // int a;
    // cin >> a;
    // for (int i = 0; i < a; i++)
    // {
    //     int x;
    //     cin >> x;
    //     s.push_back(x);
    // }
    // for (int ss : s)
    //     cout << ss << " ";

    // type 2
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}