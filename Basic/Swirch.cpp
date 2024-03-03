#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ch;
    cin >> ch;
    vector<double> a;
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    switch (ch)
    {
    case 1:

        return 3.14159265359 * a[0] * a[0];

    case 2:

        return a[0] * a[1];
    }
  
}