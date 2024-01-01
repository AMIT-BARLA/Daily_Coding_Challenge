// Date: 01/01/2024
//Link - https://www.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
/*
1. Check if the size of nums is odd; if true, return false.
2. Create a frequency array freq with size k initialized to zeros.
3. Iterate through each element in nums:
      Calculate y = nums[i] % k.
      If freq[(k - y) % k] is not zero:
          Decrement freq[(k - y) % k].
      Else:
          Increment freq[y].
4. Check if any element in the freq array is not zero; if true, return false.
5. Otherwise, return true
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        
        if ((nums.size() % 2) != 0){
            return false;
        }
       vector<int> freq(k,0);
        
        for(int i =0; i < nums.size(); i++)
        {
            int y = nums[i]%k;
            
            if(freq[(k-y)%k] != 0)
            {
                freq[(k-y)%k]--;
            }
            else 
            {
                freq[y]++;
            }
        }
        
        for(int i =0; i < k ; i++)
        {
            if(freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends
