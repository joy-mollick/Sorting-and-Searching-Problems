
class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int cont[26][27];
        memset(cont,0,sizeof(cont));
        for(int i=0;i<votes.size();i++)
        {
            for(int j=0;j<votes[i].size();j++)
            {
                cont[votes[i][j]-'A'][j]++;
            }
        }
        
        string ans=votes[0];
        sort(ans.begin(),ans.end(),[&cont](char &a,char &b)
             {
              for(int i=0;i<=26;i++)   
              {
                  if(cont[a-'A'][i]>cont[b-'A'][i])
                  {
                      return true;
                  }
                  else if(cont[a-'A'][i]<cont[b-'A'][i])
                  {
                      return false;
                  }
              }
                 return (a<b);
             }
            );
        return ans;
    }
};
