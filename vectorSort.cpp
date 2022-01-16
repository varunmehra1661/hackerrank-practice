#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n, nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums;
        v.push_back(nums);
    }
    sort(v.begin(), v.end());

    for (auto x : v)
        cout << x << " ";

    return 0;
}
