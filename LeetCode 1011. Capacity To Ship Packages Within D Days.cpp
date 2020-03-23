class Solution {
public:
    int can_shift_day(int weight,vector<int>& weights)
    {
        int days=1;
        int n=weights.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+weights[i];
            if(sum>weight)
            {
                days++;
                sum=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int D) {
        int left=0;
        int right=0;
        int n=weights.size();
        for(int i=0;i<n;i++)
        {
            left=max(left,weights[i]);
            right+=weights[i];
        }
        // all summation with all weights[i] can be enough capacity to shiping all weights ,it can be maximum capacity of ship .So , right takes this value
        // take maximum of all weights itcan be minimum capacity as D is within length of array 
        int ans=right;
        while(left<right)
        {
            int mid=(left+right)>>1;
            int days=can_shift_day(mid,weights);
            if(days>D)// capacity is too small,that's why days_more needed
            {
                left=mid+1;
            }
            else if(days<=D) // capacity is too large ,that's why days_less needed 
            {
                right=mid;
                ans=mid;
            }
        }
        return ans;
    }
};
