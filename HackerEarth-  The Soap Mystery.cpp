    #include<bits/stdc++.h>

    using namespace std;

    typedef long long int ll;


    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int>v;
        int n,a,q,l;
        cin>>n;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        vector<int>::iterator it;
        cin>>q;
        while(q--)
        {
            cin>>l;
            it=lower_bound(v.begin(),v.end(),l);
            int pos=it-v.begin();
            cout<<pos<<endl;
        }
    }
