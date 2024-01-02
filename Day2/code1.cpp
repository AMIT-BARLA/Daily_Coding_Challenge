//Date: 02/01/2024
//https://www.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k3121/1

//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
     int maxSumArray[n];
     maxSumArray[0] = a[0];

    int currentMax = a[0];
    for (int i = 1; i < n; i++) 
    {
        currentMax = max(a[i], currentMax + a[i]);
        maxSumArray[i] = currentMax;
    }

    int initialSum = 0;
    for (int i = 0; i < k; i++)
        initialSum += a[i];

    int result = initialSum;
    for (int i = k; i < n; i++) 
    {
        initialSum = initialSum + a[i] - a[i - k];
        result = max(result, initialSum);
        result = max(result, initialSum + maxSumArray[i - k]);
    }

    return result;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
