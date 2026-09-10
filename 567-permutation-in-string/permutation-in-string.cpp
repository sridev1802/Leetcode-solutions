class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.length();

        if(k>s2.length()) return false;

        vector<int> a(26,0), b(26,0);

        for(char c:s1) a[c-'a']++;

        for(int i=0;i<k;i++)
            b[s2[i]-'a']++;

        if(a==b) return true;

        for(int r=k;r<s2.length();r++){
            b[s2[r]-'a']++;
            b[s2[r-k]-'a']--;

            if(a==b) return true;
        }

        return false;


    }
};