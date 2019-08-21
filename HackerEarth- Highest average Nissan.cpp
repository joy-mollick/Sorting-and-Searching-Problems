    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n,q,l;
        double a,sum=0.0,k;
        vector<double>v;
        vector<double>ashol;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=n;i++)
        {
            sum=sum+v[i-1];
            ashol.push_back((sum/(double(i))));
            //cout<<(sum/(double(i)))<<" ";
        }
        //cout<<endl;
        vector<double>::iterator it;
        cin>>q;
        while(q--)
        {
            cin>>k;
            it=lower_bound(ashol.begin(),ashol.end(),k);
            int pos=it-ashol.begin();
            cout<<pos<<'\n';

        }
    }
