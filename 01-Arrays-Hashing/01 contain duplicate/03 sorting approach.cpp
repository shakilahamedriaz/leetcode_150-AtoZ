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

// bool duplicate(vector<int>& nums)
// {
//     const int mx = 100001;
//     vector<bool> arr(mx, false);  // make all value initially zero/false

//     for(int i = 0; i < nums.size(); i++)
//     {
//         if(arr[nums[i]])
//         {
//             return true;
//         }
//         arr[nums[i]] = true;

//     }

//     return false;
// }


//Sorting approach
bool duplicate(vector<int>& nums)
{
    sort(nums.begin(), nums.end());

    for(int i = 1; i < nums.size(); i++)
    {
       if(nums[i] == nums[i-1])
       {
          return true;
       }
    }

    return false;
}

//Time complexity: 0(nlogn)
//space complexity: O(1) or O(n) depending on the sorting algorithm.
 
 
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
