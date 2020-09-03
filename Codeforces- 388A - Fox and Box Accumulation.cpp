
/// Codeforces- 388A - Fox and Box Accumulation
/// Category: greedy +sorting .


#include<bits/stdc++.h>

using namespace std;


typedef unsigned long long ll;


int main()

{
    int n,num;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) {cin>>num;v.push_back(num);}
    /// it will keep track of used boxes
    bool vis[n];
    memset(vis,false,sizeof(vis));

    sort(v.begin(),v.end());

    int used_boxes=0;
    int piles=0;

    while(used_boxes<n)
    {
        piles++;
        ///it will record the number of boxes of a pile i.e. strength of next box.
        /// new pile start ,so initialize it with zero
        int pile_box=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i] && v[i]>=pile_box)
            {
                vis[i]=true;
                used_boxes++;
                pile_box++;
            }
        }
    }

    cout<<piles<<endl;

    return 0;
}
