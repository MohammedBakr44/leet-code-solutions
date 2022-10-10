class Solution {
public:
    vector<int> insertionSort(vector<int> arr, int n) {
        int i, key, j;
        for(i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while(j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        return arr;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> sortedArray = insertionSort(nums, nums.size());
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] == sortedArray[j]) {
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};