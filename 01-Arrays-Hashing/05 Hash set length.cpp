// Author: Shakil Ahamed Riaz
// Purpose: Check if an array contains duplicate elements
// Language: C++17 Standard
// Date: 29 April 2025


#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"
 
int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }


// 03 Hash Set Length
bool duplicate(vector<int>& nums)
{
    unordered_set< int > st;  //unordered set contain duplicate without sorting so just 0(n)
    st.insert(nums.begin(), nums.end()); //insertion Time	O(1) average
    
    if(st.size() != nums.size())
    {
        return true;
    }
    return false;


}

// Time complexity: 0(n)
// space complexity: 0(n)
 
void shakil_sol() 
{
   int t;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            v.push_back(x);
        }

        if(duplicate(v))
        {
            cout<< "Yes" << endl;
        }
        else
        {
            cout<< "No" << endl;
        }
   }
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
