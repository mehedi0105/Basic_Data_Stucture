// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // if (arr[i] == arr[i + 1] || arr[i] + 1 == arr[i + 1])
//         auto it = find(arr.begin(), arr.end(), arr[i] + 1);
//         if (it != arr.end())
//             cnt++;
//     }
//     cout << cnt;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = find(arr.begin(), arr.end(), arr[i] + 1);
        if (it != arr.end())
            cnt++;
    }
    cout << cnt;
    return 0;
}