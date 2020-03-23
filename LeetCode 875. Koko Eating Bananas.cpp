class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int left=0;
        int right=0;
        for(int i=0;i<piles.size();i++)
        {
            right=max(right,piles[i]);
        }
        left=1;
        int ans=right;
        while(left<right)
        {
            int mid=(left+(right-left)/2);
            int hours=nmber_of_hors(piles,mid);
            if(hours>H)//that means we have to increase eat rate so left = mid+1
            {
                left=mid+1;
            }
            else// that means we have to find minimum k ,so right=mid
            {
                ans=mid;
                right=mid;
            }
        }
        return ans;
    }
    int nmber_of_hors(vector<int>& piles,int K)
    {
        int hours=0;
        for(int i=0;i<piles.size();i++)
        {
            hours+=(piles[i]/K);
            if(piles[i]%K!=0) hours++;// this is for ceil 
        }
        return hours;
    }
};
