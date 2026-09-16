class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            string a = to_string(i);

            if (a.size() % 2 != 0)
                continue;

            int sum1 = 0, sum2 = 0;
            int n = a.size();

            for (int j = 0; j < n / 2; j++) {
                int x = a[j] - '0';
                int y = a[n / 2 + j] - '0';

                sum1 += x;
                sum2 += y;
            }

            if (sum1 == sum2)
                count++;
        }

        return count;
    }
};