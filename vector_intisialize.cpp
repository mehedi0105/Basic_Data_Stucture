// Vector intitialize
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // how to create a vector
    // vector<float> cs; // type 01;
    // how to vector size
    // vector<float> fl(5);
    // vector<float> fl(5, 10.45);
    // copy to initialize vector
    // vector<float> f2(fl);
    // int arr[5] = {1, 2, 3, 4, 5};
    // vector<int> fl(arr, arr + 5);
    // how to custom initialize input
    vector<int> fl = {10, 20, 30, 40};
    for (int i = 0; i < fl.size(); i++)
        cout << fl[i] << " ";
    cout << endl;
    // cout << cs.size() << endl;
    cout << fl.size() << endl;
    return 0;
}