//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
//    App1 : O(N) : TC  : Optimal 
    // int largest(vector<int> &arr) {
    //     return *max_element(arr.begin() , arr.end());
    // }
    
    /* App2 :O(N) : Optimal 
     int largest(vector<int> &arr) {
        int maxi =INT_MIN;
        for(int i=0 ;i<arr.size() ; ++i)
        {
            if(arr[i] > maxi)
            {
                maxi= arr[i]; 
            }
        }
        return maxi;
    }
    */
    
    //  App3: O(NlogN) :Brute Force Solution 
     int largest(vector<int> &arr) {
         int n = arr.size();
        sort(arr.begin() , arr.end());
        return arr[n-1];
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
