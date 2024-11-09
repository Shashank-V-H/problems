
#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

void print(vector<int> &ans);

class Solution {
public:
  vector<int> twoSum(vector<int> &nums) {

    // ===============brute-force approach===============//
    /* vector<int> answer;
     int product = 1;
     auto it = nums.begin();
     cout << "entering while" << endl;
     int x = 0;
     for (int j = 0; j < nums.size(); j++) {
       for (int i = 0; i < nums.size(); i++) {
         if (j == i) {
           continue;
         }
         product = product * nums[i];
       }
       answer.push_back(product);
       product = 1;
       x++;
     }
     cout << "exit while" << endl;

     return answer; */
    vector<int> answer;
    vector<int> sol;
    vector<int> zero_track;
    int product = 1;
    int zero_exist = 0;

    // to calculate the product
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        // goto (we'll come to goto condition later)
        continue;
      }
      product *= nums[i];
    }

    // zero_exist or not
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        zero_exist = 1;
        break;
      }
    }

    // for (int i = 0; i < nums.size(); i++) {
    //     answer.emplace_back(product);
    // }
    if (zero_exist) {
      cout << "zero_exist" << endl << endl;
      int j = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
          cout << "seg_falut" << endl << endl;
          zero_track.emplace_back(i);
          cout << "seg_falut" << endl << endl;
        }
      }

      cout << "tracked the zeor places" << endl;

      for (int i = 0; i < nums.size(); i++) {
        answer.emplace_back(0);
      }

      cout << "replaced everything with zero" << endl;
      cout << zero_track.size();

      for (int i = 0; i < zero_track.size(); i++) {
        answer[zero_track[i]] = product;
        cout << answer[zero_track[i]] << endl;
      }
      cout << "replaced with product where zero exist in nums" << endl;

    } else {

      cout << "entered zero not exist condition" << endl;
      for (int i = 0; i < nums.size(); i++) {
        sol.emplace_back(product / nums[i]);
      }
      return sol;
    }

    return answer;
  }
};

//
//
//
// Optimized
//
//
//
//

/*class Solution {*/
/*public:*/
/*  vector<int> productExceptSelf(vector<int> &nums) {*/
/*    int n = nums.size();*/
/*    vector<int> result(n, 1);*/
/**/
/*    int leftProduct = 1;*/
/*    for (int i = 0; i < n; ++i) {*/
/*      result[i] = leftProduct;*/
/*      leftProduct *= nums[i];*/
/*    }*/
/**/
/*    int rightProduct = 1;*/
/*    for (int i = n - 1; i >= 0; --i) {*/
/*      result[i] *= rightProduct;*/
/*      rightProduct *= nums[i];*/
/*    }*/
/**/
/*    return result;*/
/*  }*/
/*};*/

void print(vector<int> &ans) {
  std::cout << "array: ";
  for (int num : ans) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

int main() {
  Solution solution;

  // Example input
  std::vector<int> nums = {2, 7, 11, 15};
  std::vector<int> nums1 = {2, 0, 11, 15};
  std::vector<int> nums2 = {2, 7, 11, 15};

  print(nums2);

  vector<int> ans = solution.twoSum(nums);
  print(ans);

  vector<int> ans1 = solution.twoSum(nums1);
  print(ans1);

  vector<int> ans2 = solution.twoSum(nums);
  print(ans2);

  return 0;
}
