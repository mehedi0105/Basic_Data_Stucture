#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; i++)
        cin >> brr[i];
    int x;
    cin >> x;
    //
    arr.insert(arr.begin() + x, brr.begin(), brr.end());
    // for (auto it = arr.begin(); it < arr.end(); it++)
    //     cout << *it << " ";
    // cout << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}