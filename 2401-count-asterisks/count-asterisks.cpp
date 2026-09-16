class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0;
        int barcnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='*') cnt++;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='|') barcnt++;
            if(barcnt%2!=0 && s[i]=='*') cnt--;
        }
        return cnt;
    }
};