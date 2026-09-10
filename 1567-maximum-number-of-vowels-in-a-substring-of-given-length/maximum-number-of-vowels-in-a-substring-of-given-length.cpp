class Solution {
public:

    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int l=0,r=k;
        int sum=0;
        for(int i=0;i<r;i++){
            if(isVowel(s[i])){
                sum++;
            }

        }
        int maxop=sum;
        while(r<n){
            
            if(isVowel(s[l]))
                sum--;
            l++;
            r++;
            
            if(isVowel(s[r-1])){
                sum++;

            }
            maxop=max(sum,maxop);
        }
        return maxop;

    }
};