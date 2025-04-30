#include<bits/stdc++.h>
using namespace std;


//3 Hash Table (Using Array)
bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    
    vector<int> arrCnt(26, 0); 
    for (int i = 0; i < s.size(); i++)
    {
        arrCnt[s[i] - 'a']++;  // Increment for characters in s
        arrCnt[t[i] - 'a']--;  // Decrement for characters in t
    }

    for (int count : arrCnt)
    {
        if (count != 0) 
        {
            return false;
        }
    }

    return true; 
}
//Time complexity: 0(n+m)
//space complexity: 0(1) since we have at most 26 different characters.


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


