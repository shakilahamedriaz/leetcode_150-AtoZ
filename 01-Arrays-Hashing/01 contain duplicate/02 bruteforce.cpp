// Author: Shakil Ahamed Riaz
// Purpose: Check if an array contains duplicate elements
// Language: C++17 Standard
// Date: 29 April 2025

#include <bits/stdc++.h>
using namespace std;

// Fast I/O Optimization
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

// Type Definitions
using ll = long long;
using ld = long double;

// Constants
constexpr double PI = 3.1415926535897932384626433832795;
constexpr char nl = '\n';

// Utility Functions
int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// Core Logic Functions
bool hasDuplicate(const vector<int>& nums) 
{
    for (int i = 0; i < nums.size(); i++) 
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j]) 
            {
                return true;
            }
        }
    }

    return false;
}

// Time coplexity: O(n^2)
// Space complexity: O(1)
   // because we are not using any extra space, just using the input array


// Solution Function
void solve() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> v[i];
        }

        cout << (hasDuplicate(v) ? "Yes" : "No") << nl;
    }
}

// Main Entry Point
int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}
