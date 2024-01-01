// Date- 01/01/2024
//Link - https://leetcode.com/problems/assign-cookies/description/?envType=daily-question&envId=2024-01-01

/*
Sort both arrays to decrease the time complexity from n^2. Utilize a two-pointer approach for the greed factor and assign cookie sizes accordingly
*/

int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int g_size = g.size();
        int s_size = s.size();
        int count = 0;
        
        for( int i =0, j =0; j < g_size && i < s_size; i++)
        {
            if( s[i] >= g[j])
            {
                ++count;
                ++j;
            }
        }
        return count;
    }
