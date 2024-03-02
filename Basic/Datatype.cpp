#include <bits/stdc++.h>
using namespace std;
int main()
{
    string type;
    cin>>type;
    // cout<<sizeof(type);
    if( type == "Long")
    {
        cout<<8<<endl;
    }
   else if( type == "Integer")
    {
        cout<<4<<endl;
    }
   else if( type == "Float")
    {
        cout<<4<<endl;
    }
   else if( type == "Double")
    {
        cout<<8<<endl;
    }
   else if( type == "Character")
    {
        cout<<1<<endl;
    }
    



return 0;
}