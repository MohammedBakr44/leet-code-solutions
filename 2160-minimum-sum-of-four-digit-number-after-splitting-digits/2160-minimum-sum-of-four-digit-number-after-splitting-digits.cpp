class Solution {
public:
    void insertionSort(vector<int>& arr) {
        int i, key, j;
        for(i = 1; i < arr.size(); i++) {
            key = arr[i];
            j = i - 1;
            
            while(j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }
    int minimumSum(int num) {
        vector<int> split;
        while(num > 0) {
           split.push_back(num%10);
            num /= 10;
        }
        insertionSort(split);
        int ans = (split[2] + (split[0] * 10)) + (split[3] + split[1] * 10);
        return ans;
    }
};