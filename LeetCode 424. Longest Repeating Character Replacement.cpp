class Solution {
public:
    int max_repet(int freq[])
    {
        int ans=0;
        for(int i=0;i<26;i++)
        {
            ans=max(ans,freq[i]);
        }
        return ans;
    }
    int characterReplacement(string s, int k) {
        int freq[26];
        memset(freq,0,sizeof(freq));
        int j=0;
        int mx_repeat=0;
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'A']++;
            mx_repeat=max(mx_repeat,max_repet(freq));
            while(((i-j+1)-mx_repeat)>k)//others can be replaced by k, when ((i-j+1)-mx_repeat) is less than k
            {
                freq[s[j]-'A']--;
                j++;
                mx_repeat=max_repet(freq);
            }
            ans=max(ans,i-j+1);
        }
       return ans;
    }
};
