/*
You are given a string s and an integer k. You can choose one of the first k letters of s and append it at the end of the string.

Return the lexicographically smallest string you could have after applying the mentioned step any number of moves.



Example 1:

Input: s = "cba", k = 1
Output: "acb"
Explanation:
In the first move, we move the 1st character 'c' to the end, obtaining the string "bac".
In the second move, we move the 1st character 'b' to the end, obtaining the final result "acb". 
Example 2:

Input: s = "baaca", k = 3
Output: "aaabc"
Explanation:
In the first move, we move the 1st character 'b' to the end, obtaining the string "aacab".
In the second move, we move the 3rd character 'c' to the end, obtaining the final result "aaabc".
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k > 1) {
            sort(s.begin(), s.end());
            return s;
        }
        string result = s;
        int n = s.length();
        for (int i = 1; i <= n - 1; i++) {
            string temp = s.substr(i) + s.substr(0, i);
            result = min(temp, result);
        }
        return result;
    }
};
int main()
{
    Solution sl;

    string s = "baaca";
    int k = 3;

    string result = sl.orderlyQueue(s, k);

    cout << result << endl;
    return 0;
}