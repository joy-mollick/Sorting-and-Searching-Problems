

/// Codeforces 203C - Photographer
/// Sorting + DS + greedy

#include<bits/stdc++.h>

using namespace std;

struct str
{
    int x,y,mb,indx;
};

bool comp(str s,str b)
{
    return (s.mb<b.mb);
}

int main()

{
    int n,d;
    cin>>n>>d;
    int a,b,x,y;
    cin>>a>>b;
    str arr[n];

    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        int tot=x*a+y*b;
        str st;
        st.mb=tot;
        st.indx=i;
        st.x=x;
        st.y=y;
        arr[i-1]=st;
    }

    sort(arr,arr+n,comp);

    int ans=0;
    vector<int>res;

    for(int i=0;i<n;i++)
    {
        /// cout<<arr[i].mb<<endl;
        if(d>=arr[i].mb) {d=d-arr[i].mb;ans++;res.push_back(arr[i].indx);}
    }

    cout<<ans<<endl;
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";

    return 0;
}
