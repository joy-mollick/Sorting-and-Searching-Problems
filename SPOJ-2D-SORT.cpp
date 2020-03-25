#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int,int>&x,pair<int,int>&y)
{
    if(x.first==y.first)
    {
        return (x.second>y.second);
    }
    else
    {
        return (x.first<y.first);
    }
}

int main()

{
    int tc;
    scanf("%d",&tc);
    int n;
    int x,y;
    vector< pair<int,int> >v;
    while(tc--)
    {
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d%d",&x,&y);
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<v.size();i++)
        {
            printf("%d %d\n",v[i].first,v[i].second);
        }
        v.clear();
    }
    return 0;
}
