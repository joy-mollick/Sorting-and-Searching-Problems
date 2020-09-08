
/// Codeforces- C - Coffee Break.
/// Category:  binary search+greedy.


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


const int mx=200002;

int ans[mx];

int main()

{

    int n,m,d,value;
    scanf("%d%d%d",&n,&m,&d);
    set< pair<int,int> >v;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&value);
        pair<int,int> nd;
        nd.first=value;
        nd.second=i;
        v.insert(nd);
    }

    int temp=0;
    int day=1;
    while(!v.empty())
    {
        auto it=v.lower_bound(make_pair(temp,-1));
        if(it==v.end())
        {
            temp=0;
            day++;
        }
        else
        {
            ans[(*it).second]=day;
            /// should be break more than d minutes
            temp=(*it).first+d+1;
            v.erase(it);
        }
    }

    printf("%d\n",day);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",ans[i]);
    }

    return 0;
}
