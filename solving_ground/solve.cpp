/*#include <fstream>*/
/*#include <iostream>*/
/*#include <string>*/
/**/
/*class Solution {*/
/*public:*/
/*  int minChanges(std::string s) {*/
/*    // Placeholder implementation; replace with your logic*/
/*    return s.length(); // Example operation; replace with actual logic*/
/*  }*/
/*};*/
/**/
/*int main() {*/
/*  Solution solution;*/
/*  std::ifstream infile("input.txt"); // Open the input file*/
/**/
/*  if (!infile) {*/
/*    std::cerr << "Error opening input.txt\n";*/
/*    return 1;*/
/*  }*/
/**/
/*  std::string s;*/
/*  while (std::getline(infile, s)) {      // Read each line until end of file*/
/*    int result = solution.minChanges(s); // Call minChanges for each string*/
/*    std::cout << "Result for \"" << s << "\": " << result << "\n";*/
/*  }*/
/**/
/*  infile.close();*/
/*  return 0;*/
/*}*/

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();
    vector<int> result(n, 1); // Initialize the result array with 1

    // Step 1: Calculate the left products
    int leftProduct = 1;
    for (int i = 0; i < n; ++i) {
      result[i] =
          leftProduct; // Store the product of elements to the left of `i`
      leftProduct *= nums[i]; // Update the leftProduct for the next iteration
    }

    // Step 2: Calculate the right products and update the result array
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; --i) {
      result[i] *= rightProduct; // Multiply with the product of elements to the
                                 // right of `i`
      rightProduct *= nums[i]; // Update the rightProduct for the next iteration
    }

    return result;
  }
};
