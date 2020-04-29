#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
    static int zeros(string s) {
        int count = 0;
        for (char c : s) {
            if (c == '0') {
                count++;
            }
        }
        return count;
    }
    static int ones(string s) {
        int count = 0;
        for (char c : s) {
            if (c == '1') {
                count++;
            }
        }
        return count;
    }
public:
    static int maxScore(string s) {
        int maxs = INT_MIN;
        for (int i = 0; i < s.size() - 1; i++) {
            string s1(s.begin(), s.begin() + i + 1);
            string s2(s.begin() + i + 1, s.end());
            cout << s1 << ", " << s2 << endl;
            int sum = (zeros(s1) + ones(s2));
            maxs = max(maxs, sum);
        }
        return maxs;
    }
};

int main() {
    cout << "011101" << endl;
    cout << Solution::maxScore(string("011101")) << endl;
}