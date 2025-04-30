#include<bits/stdc++.h>
using namespace std;

//Hash Map
bool isAnagram(string s, string t)
{
    if(s.length() != t.length())
    {
        return false;
    }

    unordered_map< char, int > cntS;
    unordered_map< char, int > cntT;

    for(int i = 0; i < s.length(); i++)
    {
        cntS[s[i]]++;
        cntT[t[i]]++;
    }

    return cntS == cntT;

}
//Time complexity: 0(n+m)
//space complexity: 0(1)

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


