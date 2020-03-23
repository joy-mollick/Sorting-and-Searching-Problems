class Solution {
public:
    
    int getKth(int lo, int hi, int k) {
        vector< pair<int,int> >v;
        for(int j=lo;j<=hi;j++)
        {
            v.push_back(make_pair(po(j),j));
        }
        sort(v.begin(),v.end());
        return (v[k-1].second);
    }
     int po(int x){
        int res=0;
        while(x!=1){
            if(x%2==0){
                x=x>>1;
            }
            else{
                x=3*x+1;
            }
            res++;
        }
        return res;
    }
};
