// Solution 1
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> frequenciesS;
        unordered_map<char, int> frequenciesT;

        for (int i = 0; i < s.size(); i++) {
            if (frequenciesS.count(s[i])) {
                frequenciesS[s[i]]++;
            } else {
                frequenciesS.insert({s[i], 1});
            }
        }

        for (int i = 0; i < t.size(); i++) {
           if (frequenciesT.count(t[i])) {
                frequenciesT[t[i]]++;
            } else {
                frequenciesT.insert({t[i], 1});
            }
        }

        return frequenciesS == frequenciesT;
    }
};

// Solution 2