    #include<bits/stdc++.h>

    using namespace std;

    #define fast ios::sync_with_stdio(false);
    #define fast1 cin.tie(NULL);
    #define fast2 cout.tie(NULL);

    int main()
    {
        fast;
        fast1;
        fast2;
        int tc,N,K,P,l;
        cin>>tc;
        while(tc--)
        {
           cin>>N>>K>>P;
            int c=0;

       for(int i=0;i<K;i++)
     {
         cin>>l;
        if(l<=P+c){
            c++;} // when the number after range P+c will be deleted then it will not affect our answer because P+c'th number's serial is ok
     }

    if(K+P<=N)
        cout<<P+c<<'\n'; // c numbers deleted before Pth smallest number ,so P+c th number is our answer
    else
    cout<<"-1"<<'\n';
        }
    }
