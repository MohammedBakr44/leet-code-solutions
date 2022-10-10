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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) { 
        mergeSort(nums1, 0, nums1.size() - 1);
        mergeSort(nums2, 0, nums2.size() - 1);
        int i = 0;
        int j = 0;
        vector<int> ans;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            } else if(nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};