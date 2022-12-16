class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i, j, res, sum;
        i = j = res = sum = 0;
        double avg;
        for(; j < arr.size(); j++) {
            sum += arr[j];
            if(j >= (k-1)) {
                avg = sum/k;
                if(avg >= threshold) res++;
                sum -= arr[j-(k-1)];
            }
        }
        return res;
    }
};