#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    string s;
    s = to_string(n);
    int st = 0;
    int e = s.size() - 1;
    while (st <= e)
    {   
        if (s[st] == s[e])
        {
            st++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{

    return 0;
}
