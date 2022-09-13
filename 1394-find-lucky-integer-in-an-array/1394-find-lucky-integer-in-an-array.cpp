class Solution {
public:
    int findLucky(vector<int>& arr) {
        int fq[500+5] = {0};
        int lucky = 0;
        for(int i = 0; i < arr.size(); i++) {
            fq[arr[i]]++;
        }
        for(int i = 0; i < arr.size(); i++) {
            if(fq[arr[i]] == arr[i] && arr[i] > lucky) {
                lucky = arr[i];
            }
        }
        if(lucky) {
            return lucky;
        } else {
            return -1;
        }
    }
};