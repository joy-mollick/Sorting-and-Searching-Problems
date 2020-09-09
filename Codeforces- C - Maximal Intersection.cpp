
/// Codeforces- C - Maximal Intersection.
/// Category: greedy + sorting.


///Just sort the co-ordinate separately and just skip one co-ordinate and compare 


#include<bits/stdc++.h>

using namespace std;

vector< pair<int,int> >v;

int main()
{
    multiset<int>left;
    multiset<int>right;
    int n,l,r;
    cin>>n;
    while(n--)
    {
        cin>>l>>r;
        left.insert(l);
        right.insert(r);
        v.push_back(make_pair(l,r));
    }

    int res=0;

    for(int i=0;i<(int)v.size();i++)
    {
        int L=v[i].first;
        int R=v[i].second;
        /// first erase this one and check
        left.erase(left.find(L));
        right.erase(right.find(R));
        ///maximum interval is distance between maximum left and minimum right co-ordinate
        int ll=*left.rbegin();
        int rr=*right.begin();
        res=max(res,rr-ll);
        /// after checking again insert this.
        left.insert(L);
        right.insert(R);
    }

    cout<<res<<endl;

    return 0;
}
