#include<bits/stdc++.h>

using namespace std;

 vector<int>a;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,M,l;
    cin>>n>>M;
    vector<int>b;
    map<int,int>m;
    while(n--)
    {
        cin>>l;
        a.push_back(l);
        m[l]++;
    }
    while(M--)
    {
        cin>>l;
        b.push_back(l);
    }
    sort(a.begin(),a.end());
    vector<int>::iterator it;
    for(int i=0;i<b.size();i++)
    {
        int q=b[i];
        it=lower_bound(a.begin(),a.end(),q);
        int ans=it-a.begin();
        if((*it)==q) ans+=m[q];
        cout<<ans<<" ";
    }
}
