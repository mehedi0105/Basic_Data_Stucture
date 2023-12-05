#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vr;
    // cout << vr.size() << endl;
    // cout << vr.max_size() << endl;
    vr.push_back(10);
    // cout << vr.capacity() << endl;
    vr.push_back(20);
    // cout << vr.capacity() << endl;
    vr.push_back(30);
    // cout << vr.capacity() << endl;
    vr.push_back(40);
    // cout << vr.capacity() << endl;
    // vr.clear();
    // cout << vr.size() << endl;
    // cout << vr[0] << endl;
    // (vr.empty()) ? cout << "YES IT IS EMPTY" << endl : cout << "Sorry It is not Empty" << endl;
    vr.resize(2);
    vr.resize(5, 20);
    for (int i = 0; i < vr.size(); i++)
        cout << vr[i] << endl;
    return 0;
}