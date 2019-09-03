#include<bits/stdc++.h>

using namespace std;

 vector<int>a;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int,int> >v;
    vector<int>p;
    int n,d,m,s;
    cin>>n>>d;
    long long prefix[n];
    for(int i=0;i<n;i++)
    {
        cin>>m>>s;
        v.push_back(make_pair(m,s));
        p.push_back(m);
    }
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(long long)(v[i].second);
        prefix[i]=sum;
        //cout<<sum<<endl;
    }
    long long ans=0;
    for(int j=0;j<n;j++)
    {
        int an=lower_bound(p.begin(),p.end(),(p[j])+d)-p.begin();
        long long h=prefix[an-1];
        if(j!=0)
        {
            h=prefix[an-1]-prefix[j-1];
        }
       // cout<<an<<" "<<h<<endl;
        ans=max(ans,h);
    }
    cout<<ans<<endl;
}
