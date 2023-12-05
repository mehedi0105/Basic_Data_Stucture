#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<int> B(n);
    for (int i = 0; i < n; i++)
        cin >> B[i];
    // a.insert(a.end(), b.begin(), b.end());
    B.insert(B.end(), A.begin(), A.end());
    for (int i = 0; i < B.size(); i++)
        cout << B[i] << " ";
    return 0;
}