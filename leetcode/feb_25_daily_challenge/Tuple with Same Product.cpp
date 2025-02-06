class Solution {
public:
  int tupleSameProduct(vector<int> &nums) {
    unordered_map<long long, int> productCount;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        long long product = (long long)nums[i] * nums[j];
        productCount[product]++;
      }
    }
    int result = 0;
    for (auto &[prod, count] : productCount) {
      if (count > 1) {

        result += 4 * count * (count - 1);
      }
    }
    return result;
  }
};
