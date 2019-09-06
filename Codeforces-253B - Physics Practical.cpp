#include<bits/stdc++.h>

using namespace std;

int main(){
      freopen("input.txt", "rt", stdin);
      freopen("output.txt", "wt", stdout);
    	int n,a;
    	cin>>n;
    	vector<int>v;
    	for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int ans=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            int position=v.end()-lower_bound(v.begin(),v.end(),(2*v[i])+1);
            ans=min(ans,position+i);

        }
        cout<<ans<<endl;
}
