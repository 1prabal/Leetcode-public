class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> m;
        int value = 26;
        for(char i='a'; i<='z'; i++){
            m[i] = value--;
        }
        int ans=0;
        for(int i=0; i<s.size(); i++){
            ans += m[s[i]]*(i+1);
        }
        return ans;
    }
};