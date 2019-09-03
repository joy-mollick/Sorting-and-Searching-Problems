#include<bits/stdc++.h>

using namespace std;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t,a,sz;
    cin>>n>>t;
    sz=n;
    vector<int>v;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    int sum=0;
    int ans=0;
    int j=0;
    for(int i=0;i<sz;i++)
    {
        while(sum<=t&&j<sz)
        {
            sum+=v[j];
            if(sum<=t){
            ans=max(ans,(j-i)+1);}
            j++;
        }
        sum=sum-v[i];
    }
    cout<<ans<<endl;
}
