#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return (false);
        }

        if (!s.length() || !t.length()) {
            return (true);
        }

        map<char, int> map_s;
        map<char, int> map_t;

        for (int i = 0; i < s.length(); i++) {
            ++map_s[s[i]];
            ++map_t[t[i]];
        }
        
        return (map_s == map_t);
    }
};

int main() {
    Solution solution;
    string s = "bbcc";
    string t = "bcbc";

    cout << solution.isAnagram(s, t);

    return (0);
}