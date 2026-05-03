class Solution {
   public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash1;
        unordered_map<char, int> hash2;
        for (const char& x : s) {
            hash1[x]++;
        }
        for (const char& x : t) {
            hash2[x]++;
        }
        if(hash1.size()!=hash2.size()){
            return false;
        }
        for (auto iter = hash1.begin(); iter != hash1.end(); iter++) {
            if(hash2[iter->first]!=iter->second){
                return false;
            }
        }
        return true;
    }
};
