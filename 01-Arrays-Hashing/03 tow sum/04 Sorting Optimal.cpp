#include<bits/stdc++.h>
using namespace std;


// Function to find two numbers in the array that add up to the target
// HashMap method
void twoSum(vector<int> &v, int n, int target)
{
   int left = 0, right = n - 1;
   sort(v.begin(), v.end());

   while(left < right)
   {
      int sum = v[left] + v[right];
      if(sum == target)
      {
         cout<< left << " " << right << endl;
      }
      else if(sum < target) left ++;
      else  right --;
   }
   
}
//Time Complexity: O(N) + O(N*logN), where N = size of the array
//space complexity: O(1) as we are not using any extra space.

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