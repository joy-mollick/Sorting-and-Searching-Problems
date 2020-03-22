class Solution {
public:
    bool ok(int freq1[],int freq2[])
    {
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        int freq1[26];
        memset(freq1,0,sizeof(freq1));
        for(int i=0;i<s1.length();i++)
        {
            freq1[s1[i]-'a']++;
        }
        int n=s1.length();
        int freq2[26];
        memset(freq2,0,sizeof(freq2));
        for(int i=0;i<n;i++)
        {
            freq2[s2[i]-'a']++;
        }
        bool ans=false;
        if(ok(freq1,freq2)) ans=true;
        int i=n-1;
        int j=0;
        while(i<s2.length()){
        freq2[s2[j]-'a']--;
            j++;
            i++;
            if(i<s2.length()){
        freq2[s2[i]-'a']++;
        if(ok(freq1,freq2)) ans=true;}
        }
        return ans;
    }
};
