#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string a, string b)
{
    unordered_map<char, int> mp;
    for (int i = 0; i <= a.size(); i++)
    {
        mp[a[i]]++;
        mp[b[i]]--;
    }
    for (auto it : mp)
    {
        if (it.second != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string a = "geeksforgeek";
    string b = "forgeekgeeks";
    bool ans = false;
    ans = checkAnagram(a, b);
    if (ans == true)
    {
        printf("both strings are anagram \n");
    }
    else
    {
        printf("strings are not anagram \n");
    }
    return 0;
}