class Solution {
public:
    void insertionSort(vector<int>& arr, int n) {
        int i, key, j;
        for(int i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while(j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }
    // calculating first occurance
    int firstOccu(vector<int> arr, int target) {
        int n = arr.size();
        int l = 0, r = n-1;
        int ans = -1;
        while(l <= r) {
            int md = (l+r)/2;
            if(arr[md] == target) {
                ans = md;
                r = md-1;
            } else if(arr[md] > target) {
                r = md-1;
            } else {
                l = md+1;
            }
        }
        return ans;
    }
    // calculating last occurance
    int lastOccu(vector<int> arr, int target) {
        int n = arr.size();
        int l = 0, r = n-1;
        int ans = -1;
        while(l <= r) {
            int md = (l+r)/2;
            if(arr[md] == target) {
                ans = md;
                l = md+1;
            } else if (arr[md] > target){
                r = md-1;
            } else {
                l = md+1;
            }
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        insertionSort(nums, nums.size());
        int first = firstOccu(nums, target);
        int last = lastOccu(nums, target);
        if(first != -1 && last != -1) { 
            for(int i = first; i <= last; i++) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};