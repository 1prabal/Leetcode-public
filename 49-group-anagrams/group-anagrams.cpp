class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string, vector<string>> m;

        for (auto s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            m[temp].push_back(s);
        }

        for (auto p : m) {
            v.push_back(p.second);
        }

        return v;
    }
};