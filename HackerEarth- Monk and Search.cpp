    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n,q,a,k,l;
        vector<int>v;
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
            cin>>l>>k;

            if(l==0){
            it=lower_bound(v.begin(),v.end(),k);
            if(it==v.end()) cout<<"0"<<'\n';
            else {int pos=(int)(v.end()-it);
            cout<<pos<<'\n';}
            }
            else
            {
                it=upper_bound(v.begin(),v.end(),k);
            if(it==v.end()) cout<<"0"<<'\n';
            else {int pos=(int)(v.end()-it);
            cout<<pos<<'\n';}
            }
        }
    }
