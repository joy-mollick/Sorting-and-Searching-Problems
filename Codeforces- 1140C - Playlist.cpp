
/// Codeforces- 1140C - Playlist.
/// Category: greedy + sorting.
/// classical greedy problem


/// first answer depends upon value and length
/// sort according to beauty decreasing  order
/// comes from the first element and push in the minheap the length
/// when k length happens

/// then think you have to choose longest k-1 lengths among these so far
/// then current ith beauty is minimum ,assume it as included in k-1 groups and total k elements
/// then extract sum and multiply with ith beauty and check maximum.
/// thus alltime find best k-1 elements among left so far then include ith beauty with this and find answer.

#include<bits/stdc++.h>

using namespace std;

struct song
{
    long long t,v;
};

song s[300050];

bool cmp(const song& a,const song& b) {
    if(a.v!=b.v)
    return a.v>b.v;
   /// else increasing according to less length
    else
    {
        return(a.t<b.t);
    }
}

/// min heap , to discard a little one
priority_queue<long long,vector<long long> , greater<long long> > q;

int main() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>s[i].t>>s[i].v;
    }
    sort(s,s+n,cmp);
    long long ans=0;
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        if((int)q.size()==k)
        {
            sum-=q.top();
            q.pop();
        }
        /// now k-1 elements
        /// with kth element s[i]
        sum+=s[i].t;
        q.push(s[i].t);
        ans = max(ans,s[i].v*sum);
    }
    cout<<ans<<endl;
    return 0;
}
