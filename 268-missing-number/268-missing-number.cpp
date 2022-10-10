class Solution {
public:
void merge(vector<int>& arr, int left, int mid,
           int right)
{
    long long subArrayOne = mid - left + 1;
    long long subArrayTwo = right - mid;

    vector<int> L(subArrayOne);
    vector<int> R(subArrayTwo);
 

    for (long long i = 0; i < subArrayOne; i++)
        L[i] = arr[left + i];
    for (long long j = 0; j < subArrayTwo; j++)
        R[j] = arr[mid + 1 + j];
 
    long long indexOfSubArrayOne
        = 0,
        indexOfSubArrayTwo
        = 0; 
    long long indexOfMergedArray
        = left;
 
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (L[indexOfSubArrayOne]
            <= R[indexOfSubArrayTwo]) {
            arr[indexOfMergedArray]
                = L[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            arr[indexOfMergedArray]
                = R[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    
    while (indexOfSubArrayOne < subArrayOne) {
        arr[indexOfMergedArray]
            = L[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    
    while (indexOfSubArrayTwo < subArrayTwo) {
        arr[indexOfMergedArray]
            = R[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
 
void mergeSort(vector<int>& arr, int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
 
    auto mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}
    int missingNumber(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        if(nums[0] != 0) return 0;
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i+1] - nums[i] != 1) {
                return nums[i] + 1;
            }
        }
        return nums[nums.size()-1]+1;
    }
    // [9,6,4,2,3,5,7,0,1]
    // [0, 1, 2, 3, 4, 5, 7, 9]
};