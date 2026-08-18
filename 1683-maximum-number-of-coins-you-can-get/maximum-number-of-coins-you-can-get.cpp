class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int a = n-2;
        int sum = 0;
        for(int i=0; i<n/3; i++){
            sum+=piles[a];
            a = a-2;
        }
        return sum;
    }
};