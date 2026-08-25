class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        unordered_map<char,int>freqs;
        unordered_map<char,int>freqt;
        for(int i=0;i<n;i++){
            freqs[s[i]]++;
            freqt[t[i]]++;
        }
        return freqs==freqt;
    }
};
