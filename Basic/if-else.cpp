#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        return "greater" ;
    }
    else if (a < b)
    {
        return "smaller";
    }
    else
    {
     return  "equal";
    }

    return 0;
}