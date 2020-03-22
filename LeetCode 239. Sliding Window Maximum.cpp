class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        multiset<int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>=k)
            {
                m.erase(m.find(nums[i-k]));
            }
            m.insert(nums[i]);
            if(i>=k-1)
            {
                int mx=*m.rbegin();
                ans.push_back(mx);
            }
        }
        return ans;
    }
};
