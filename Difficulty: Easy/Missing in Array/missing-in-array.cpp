class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size() + 1; // one number missing
        long long total = 1LL * n * (n + 1) / 2;
        long long sum = 0;
        for (int x : arr) sum += x;
        return total - sum;
    }
};