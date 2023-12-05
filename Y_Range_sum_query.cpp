#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N, Q;
    cin >> N >> Q;
    long long arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    long long freq[N];
    freq[0] = arr[0];
    for (int i = 1; i <= N; i++)
        freq[i] = arr[i] + freq[i - 1];
    while (Q--)
    {
        long long L, R;
        cin >> L >> R;
        L--;
        R--;
        long long sum;
        if (L == 0)
            sum = freq[R];
        else
            sum = freq[R] - freq[L - 1];
        cout << sum << endl;
    }
    return 0;
}