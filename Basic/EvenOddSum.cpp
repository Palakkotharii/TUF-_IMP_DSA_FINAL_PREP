#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int esum = 0;
    int osum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
        {
            esum += rem;
        }
        else
        {
            osum += rem;
        }
        n /= 10;
    }
    cout << esum << " " << osum << endl;
}
