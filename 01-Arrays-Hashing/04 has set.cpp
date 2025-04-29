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


// 03 Hash Set
bool duplicate(vector<int>& nums)
{
        unordered_set<int> st; 
        for(auto num : nums)
        {
            st.insert(num);
        }
        
        long long sum = 0;
        for(auto it: st)
        {
            sum += it;
        }

        long long sumarr = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sumarr += nums[i];
        }
        
        if(sum != sumarr)
        {
            return true; // duplicate
        }
        else
        {
            return false; // not duplicate
        }

}

// // 03 Hash Set
// bool duplicate(vector<int>& nums)
// {
//    unordered_set<int> st; //  arbitrary order // we can do using map<int, int> mp; (key , val with frequency check, but it will take nlogn time)

//    for(int i = 0; i < nums.size(); i++)
//    {
//       if(st.count(nums[i])) // st.count(nums) is available or not.
//       {
//          return true;
//       }
//       else
//       {
//         st.insert(nums[i]);
//       }
//    }
   
//    return false;
// }

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
