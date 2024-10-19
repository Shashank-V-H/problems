#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
  vector<int> uniqueElements;
  vector<int> frequencies;

  // Step 1: Count the frequency of each unique element
  for (int i = 0; i < nums.size(); i++) {
    bool found = false;
    for (int j = 0; j < uniqueElements.size(); j++) {
      if (nums[i] == uniqueElements[j]) { // If element already exists
        frequencies[j]++;                 // Increment its frequency
        found = true;
        break;
      }
    }
    if (!found) { // New element, add to uniqueElements and set frequency to 1
      uniqueElements.push_back(nums[i]);
      frequencies.push_back(1);
    }
  }

  // Step 2: Sort elements based on their frequency (descending)
  vector<pair<int, int>> freqPairs;
  for (int i = 0; i < uniqueElements.size(); i++) {
    freqPairs.push_back({frequencies[i], uniqueElements[i]});
  }
  sort(freqPairs.rbegin(), freqPairs.rend()); // Sort by frequency descending

  // Step 3: Collect the top K frequent elements
  vector<int> result;
  for (int i = 0; i < k; i++) {
    result.push_back(freqPairs[i].second);
  }

  return result;
}

int main() {
  vector<int> nums = {1, 1, 1, 2, 2, 3};
  int k = 2;
  vector<int> result = topKFrequent(nums, k);

  // Print the result
  for (int num : result) {
    cout << num << " ";
  }
  return 0;
}
