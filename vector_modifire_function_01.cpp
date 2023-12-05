#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> a = {10, 20, 30};
    // vector<int> b = {1, 2, 3};
    // b = a;
    // a.pop_back();
    // a.insert(a.begin() + 1, b.begin(), b.end());
    // a.erase(a.begin() + 1, a.end());
    // for (int aa : b)
    //     cout << aa << " ";
    // for (int aa : a)
    //     cout << aa << " ";

    // how to replace
    vector<int> arr = {1, 2, 3, 4, 5, 6, 2, 3, 4, 1, 2, 2, 3};
    // replace(arr.begin(), arr.end(), 2, 100);
    // for (int i = 0; i < arr.size(); i++)
    //     cout << arr[i] << " ";
    auto it = find(arr.begin(), arr.end(), 2);
    cout << *it;
    return 0;
}