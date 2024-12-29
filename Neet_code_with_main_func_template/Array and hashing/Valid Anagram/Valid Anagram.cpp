#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Your code here
    }
};

int main() {
    Solution sol;
    // repetitive task
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        bool result = sol.isAnagram(s, t);

        // Output the result (1 for true, 0 for false)
        cout << result << endl;
    }

    return 0;
}
