#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for(const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagrams[sortedStr].push_back(str);
        }
        vector<vector<string>> result;
        for(const auto& pair : anagrams) {
            result.push_back(pair.second);
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = s.groupAnagrams(strs);
    for(auto res : result) {
        for(auto str : res) {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}