#include<bits/stdc++.h>

using namespace std;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,l;
    cin>>n;
    vector<int>a;
    vector<int>b;
    while(n--)
    {
        cin>>l;
        a.push_back(l);
    }
    cin>>m;
    while(m--)
    {
        cin>>l;
        b.push_back(l);
    }
    vector<int>::iterator it;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int sza=a.size();
    int szb=b.size();
    int i=0,j=0,cnt=0;
    while(i<sza&&j<szb)
    {
        if(a[i]==b[j]||(a[i]+1)== b[j]) // a[i] < b[j] or ((a[i]+1)== b[j])
        {
            //cout<<a[i]<<" "<<b[j]<<endl;
            cnt++;
            i++;
            j++;
        }
        else if(b[j]+1==(a[i])) // b[j]<a[i]
        {
           // cout<<a[i]<<" "<<b[j]<<endl;
            cnt++;
            i++;
            j++;
        }
        else if(a[i]<b[j]) i++;
        else if(a[i]>b[j]) j++;
    }
    cout<<cnt<<endl;
}
