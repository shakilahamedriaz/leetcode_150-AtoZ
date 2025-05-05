#include<bits/stdc++.h>
using namespace std;


// Function to find two numbers in the array that add up to the target
// HashMap method
void twoSum(vector<int> &v, int n, int target)
{
   map< int, int > mpp;
   for(int i = 0; i < n; i++)
   {
       int num = v[i];
       int need = target - num;

       if(mpp.find(need) != mpp.end())
       {
           //return {mpp[need], i};
           cout<< mpp[need] << " " << i << endl;
           return;
       }
       mpp[num] = i;
   }
}
//time complexity: 0(nlogn)
//space complexity: O(n)

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