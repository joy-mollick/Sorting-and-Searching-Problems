#include<bits/stdc++.h>

using namespace std;

/// combinatorics problem
/// counting problem

typedef unsigned long long ll;

int main()

{
    int tc;
    scanf("%d",&tc);
    while(tc--){
    int n;
    int exit,entran;
    cin>>n;
    vector< pair<int,string> >v;
    int ans=0;

    while(n--)
    {
        scanf("%d%d",&entran,&exit);
        v.push_back(make_pair(entran,"en"));
        v.push_back(make_pair(exit,"ex"));
    }
    sort(v.begin(),v.end());
    int people=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second=="en") people++;
        else people--;
        ans=max(ans,people);
    }
    printf("%d\n",ans);
    }
    return 0;
}
