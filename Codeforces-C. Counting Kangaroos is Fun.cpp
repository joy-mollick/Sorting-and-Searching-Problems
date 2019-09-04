#include<bits/stdc++.h>

using namespace std;

 typedef long long ll;

 int main()
 {
      ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ans=0;
    int n,v,m;
    vector<int>a;
    vector<int>l;
    cin>>n;
    m=n;
    while(n--)
    {
        cin>>v;
        a.push_back(v);
        l.push_back(v);
    }
    sort(a.begin(),a.end());
    int pointer=m/2;
    for(int i=0;i<m/2;)
    {
        if(pointer==m) break;

        if(a[pointer]>=2*a[i])
        {
            ans++;
            pointer++;
            i++;
        }
        else
        {
            pointer++;
        }
    }
    cout<<m-ans<<endl;
     return 0;
 }
