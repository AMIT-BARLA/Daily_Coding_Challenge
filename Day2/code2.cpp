//Date: 02/01/2024
//Link: https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/?envType=daily-question&envId=2024-01-02

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       
        vector<int> freq(201, 0);
        int max_freq = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ++freq[nums[i]];
            max_freq = max(max_freq, freq[nums[i]]);
        }
        // for( int i : freq)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<"\n"<<max_freq;
        vector<vector<int>> result(max_freq);
        for(int element : nums)
        {
            int index = 0;
            while(freq[element] != 0){
                result[index++].push_back(element);
                freq[element]--;
            }
            
        }      
        return result;
        
    }
};
