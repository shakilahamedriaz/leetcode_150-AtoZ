#include<bits/stdc++.h>
using namespace std;

//sorting approach
bool isAnagram(string s, string t)
{
    if(s.size() != t.size())
    {
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}
//Time complexity: 0(nlogn) + 0(mlogm) = 0((nlogn) + mlogn);
//Space Complexity: 0(1)
//explainatio below:

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, t;
        cin >> s >> t;

        if(isAnagram(s, t))
        {
            cout << "anagram" << "\n";
        }
        else
        {
            cout << "not anagram" << "\n";
        }
    }

    return 0;
}


/*
Time complexity: 
sort(s.begin(), s.end()) → takes O(n log n)
sort(t.begin(), t.end()) → takes O(n log n)
s == t (string comparison) → takes O(n)
Time complexity: O(nlogn+nlogn+n)=O(nlogn)


Space complexity:

Sorting is done in-place, so no extra space is used except for a small constant amount.

String comparisons also use O(1) additional space (not including input).
Total Space Complexity: 0(1)

*/