#include<bits/stdc++.h>

using namespace std;

int freq[128];

string s;

bool oneTime()
{
    for(int i=0;i<=127;i++)
    {
        if(freq[i]>1) return false;
    }
    return true;
}

void fill_up()
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='?') s[i]='A';
    }
}

int main()

{
   /* ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
    cin>>s;
    int n=s.size();
    if(n<26) {cout<<"-1"<<endl;return 0;}
            memset(freq,0,sizeof(freq));
    for(int index=25;index<n;index++)
    {
        memset(freq,0,sizeof(freq));
        for(int pointer=index;pointer>=index-25;pointer--)
        {
            if(s[pointer]!='?'){
            freq[(int)s[pointer]]++;
            }
        }
        if(oneTime())
        {
            //cout<<"done"<<endl;
            char c='A';
            while(freq[(int)c]>0) c++;
            for(int j=index-25;j<=index;j++)
            {
                if(s[j]=='?')
                {
                    s[j]=c;
                    freq[c]++;
                    while(freq[(int)c]>0) c++;
                }
            }
            fill_up();
            cout<<s<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
}
