    #include<bits/stdc++.h>
    using namespace std;
    string s;
    int n;
    bool pali(int len)
    {
        int hashing[130];
        memset(hashing,0,sizeof(hashing));
        int v,fr=0;
        for(int i=0;i<s.size();i++)
        {
            v=(int)(s[i]);
            if(i<len)
            {
                hashing[v]++;
                if(hashing[v]%2==0) fr++;
            }
            else{
                hashing[v]++;
                if(hashing[v]%2==0) fr++;

                int left=(int)s[i-len]; // right side (i) is incrementing ,so left side should be subtracted to keep n size subtring all data fixed
                hashing[left]--;
                if(hashing[left]%2==1) fr--;// window sliding technique ,alltime keep data of length of substring n  
            }
            if(fr>=(n/2))
                return 1;
        }

        if(fr>=n/2) // if fr (2 times) occurs equal or more than half of the required size substring , then it can be rearranged to a palindrome of size n
        return 1;

        return 0;
    }
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cin>>s;
        int q;
        cin>>q;
        while(q--)
        {
            cin>>n;
            int low=n,high=(int)s.size(),mid,ans=-1;
            while(low<=high) // if n length palindrome  can't be taken from n length substring ,then we have to choose minimum length substring from where we can choose n length palindrome
            {
                mid=(low+high)/2;
                if(pali(mid)) ans=mid,high=mid-1;
                else low=mid+1;
            }
            cout<<ans<<'\n';
        }

        return 0;
    }
