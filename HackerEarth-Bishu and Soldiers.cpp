    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        int q;
        cin>>q;
        int power;
        for(int j=0;j<q;j++)
        {
            cin>>power;
            int i=0;
            int count=0,sum=0;
            while(A[i]<=power && i<n)
            {
                count++;
                sum+=A[i];
                i++;
            }
            cout<<count<<" "<<sum<<endl;
        }
    }
