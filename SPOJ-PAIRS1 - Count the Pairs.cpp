#include<bits/stdc++.h>

using namespace std;

map<int,int>m;

int main()

{
    int n,diff,a;
    cin>>n>>diff;
    int ans=0;
    set<int>v;
    int arr[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr[i]=a;
    }
    sort(arr,arr+n);
    for(int j=0;j<i;j++)
    {
        if(binary_search(arr,arr+n,arr[j]+diff)) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
