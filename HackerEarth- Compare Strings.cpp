    #include<bits/stdc++.h>

    using namespace std;

    typedef unsigned long long ll;

    int main()
    {
         ios::sync_with_stdio(false);
         cin.tie(NULL);
         cout.tie(NULL);
        ll n,q,sa=0,sb=0,index;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        for(ll i=0;i<n;i++)
        {
            if(a[i]=='1') sa+=i+1;
            if(b[i]=='1') sb+=i+1;
        }
        while(q--)
        {
            cin>>index;
            if(b[index-1]=='0'){
            sb+=index;}
            if(sb>=sa)
                cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
