class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        // answer will be always witin max of the array 
        int mx=-1;
        for(int i=0;i<arr.size();i++)
        {
            mx=max(mx,arr[i]);
        }
        int ans=mx;
        int left=0;
        int right=mx;
        int diff=target;
        while(left<=right)
        {
            int mid=(left+right)>>1;
            int tot_sum=sum(arr,mid);
            int nw_diff=abs(target-tot_sum);
            if(nw_diff<diff)
            {
                ans=mid;
                diff=nw_diff;
            }
            else if(nw_diff==diff)// when same take minimum one 
            {
                ans=min(ans,mid);
            }
            if(tot_sum>target) {right=mid-1;}
            else {left=mid+1;}
        }
        return ans;
    }
    
    int sum(vector<int>& arr,int value)
    {
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>value)
            {
                ans=ans+value;
            }
            else ans=ans+arr[i];
        }
        return ans;
    }
};
