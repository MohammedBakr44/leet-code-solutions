class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int>mp;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]] = i;
        }
        for(int i = 0; i < arr.size(); i++) {
            auto it = mp.find(arr[i] * 2);
            if(it != mp.end() && it->second != i) { 
                return true;
            }
        }
        return false;
    }
};