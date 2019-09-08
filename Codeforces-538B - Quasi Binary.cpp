    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;


    int main(){
       string s;
       cin>>s;
       int mn=9;
       for(int i=0;i<s.size();i++)
       {
           mn=min(mn,s[i]-'0');
       }
       vector<string>v;
       vector<int>v1;
       int times=mn;
       string an="";
       for(int i=0;i<s.size();i++)
       {
           an=an+'1';
       }
       while(times--)
       {
           v.push_back(an);
       }
       for(int i=0;i<s.size();i++)
       {
           int nw=(s[i]-'0')-mn;
           char c=nw+'0';
           s[i]=c;
       }
       int num=0;
       for(int i=0;i<s.size();i++) num=num*10+(s[i]-'0');
       while(num)
       {
           int n=num,seg=0,incrs=1;
           while(n)
           {
               if(n%10) seg=seg+incrs;
               n=n/10;
               incrs=incrs*10;
           }
           v1.push_back(seg);
           num=num-seg;
       }
       cout<<(v.size()+v1.size())<<endl;
       for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
       for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
       cout<<endl;
       // for(int )
    }
