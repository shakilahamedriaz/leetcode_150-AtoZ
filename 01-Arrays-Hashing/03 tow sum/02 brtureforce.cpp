#include<bits/stdc++.h>
using namespace std;


// Function to find two numbers in the array that add up to the target
//bruteforce
void twoSum(vector<int> &v, int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(v[i] +  v[j] == target)
            {
                cout<<i << " and " << j << "\n";
            }
        }
    }
}
//time complexity: 0(n^2)
//space complexity: O(1)

int main()
{
     int t;
     cin >> t;
     while(t--)
     {
        int n, target;
        cin >> n >>target;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        //pass the array
        twoSum(v, n, target);
        
     }


    return 0;
}