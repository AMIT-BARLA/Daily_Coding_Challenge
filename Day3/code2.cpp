//Date: 03/01/2024
//Link: https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
    int index0 = -1;
    int index1 = -1;
    int index2 = -1;
    int result = INT_MAX;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '0') {
            index0 = i;
        }
        if (S[i] == '1') {
            index1 = i;
        }
        if (S[i] == '2') {
            index2 = i;
        }

        if (index0 != -1 && index1 != -1 && index2 != -1) {
            int maxIndex = max(index0, max(index1, index2));
            int minIndex = min(index0, min(index1, index2));
            int tempResult = maxIndex - minIndex + 1;
            result = min(result, tempResult);
        }
    }

    if (result == INT_MAX) {
        return -1;
    }

    return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends
