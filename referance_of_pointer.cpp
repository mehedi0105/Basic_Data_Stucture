#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    p = NULL;
}
int main()
{
    // while (true)
    // {
    int val = 10;
    int *pik = &val;
    fun(pik);
    cout << pik;
    // }
    return 0;
}