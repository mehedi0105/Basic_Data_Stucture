// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     long long arr[n];
//     for (long long &at : arr)
//         cin >> at;
//     long long cpy[n];
//     cpy[0] = arr[0];
//     for (int i = 1; i < n; i++)
//         cpy[i] = cpy[i - 1] + arr[i];
//     // reverse(cpy.begin(), cpy.end());
//     for (int i = n - 1; i >= 0; i--)
//         cout << cpy[i] << " ";
//     // for (long long art : cpy)
//     //     cout << art << " ";
//     return 0;
// }

//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &i : arr)
        cin >> i;
    vector<long long> bee(n);
    bee[0] = arr[0];
    for (int i = 1; i < n; i++)
        bee[i] = bee[i - 1] + arr[i];
    reverse(bee.begin(), bee.end());
    for (long long it : bee)
        cout << it << " ";
    return 0;
}