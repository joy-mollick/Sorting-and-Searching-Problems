
/// Codeforces- 794C - Naming Company.
/// Category: greedy + sorting.
/// It's a fantastic classical greedy problem .
/// Both plays optimally ,you have to choose the minimum one 


#include<bits/stdc++.h>

using namespace std;

const int mx=300005;

char ans[mx];

bool comp(char a,char b)
{
    return (a>b);
}

int main()

{
    string first,second;
    cin>>first>>second;
    int len=(int)second.size();
    int l_f;
    if(len%2==1)
      l_f=(len+1)>>1;
    else l_f=len>>1;
    
    /// zero based index
    l_f--;

    int l_s=len>>1;
    
    /// zero based index
    l_s--;

    int i_f=0;
    int j_s=0;
    int ln=len-1;

    /// exact sort
    sort(first.begin(),first.end());
    /// reversely sort
    sort(second.begin(),second.end(),comp);

    bool flag=true;/// initially first player

    int itr=0;

    for(itr=0;itr<len;itr++)
    {
        /// first player
        if(flag)
        {
        ///if minimum of first player's choice is less than
        /// maximum of second player's choice, put it leftmost position i.e. current i

        if(first[i_f]<second[j_s])
        ans[itr]=first[i_f++];
       /// greedily place the maximum character from the first player to the rightmost empty place
       /// so that minimum character of second player comparing than minimum of first player will be bound to place left of this character
        else
        ans[ln--]=first[l_f--];

        }
        /// second player's turn
        else
        {
            /// when second player's maximum is greater than first player
            /// it is obvious to place this one to left most position i.e. current i
            if(second[j_s]>first[i_f])
            {
                ans[itr]=second[j_s++];
            }
            /// when second player's maximum is less than first player
            /// then it is greedy to place the minimum character of the second player to the rightmost position which is empty
            else
            {
                ans[ln--]=second[l_s--];
            }
        }
        /// change turn
        flag^=1;
    }

    for(int i=0;i<len;i++) cout<<ans[i];

    cout<<endl;

    return 0;
}
