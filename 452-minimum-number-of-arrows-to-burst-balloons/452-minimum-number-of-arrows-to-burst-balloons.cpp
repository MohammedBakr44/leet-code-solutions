class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int lastpoint = points[0][1];
        // current end = 6 in the first test case after sorting.
        int ans = 1;
        for(auto &point : points) {
            /* we check if the current start is > the last end we have.
            * Though checking if it's still in the range. 
            * i.e the first ballon starts at 1 ends at 6, 
            * the second ballon starts at 2 and ends at 8;
            * so there's an overlab since 2 < 6. */
            if(point[0] > lastpoint) {
                /*
                    * what if the current start is > lastpoint?
                    * then we have a ballon that's out of our current range;
                    * so we need a new arrow
                */
                ans++;
                lastpoint = point[1];
            }
            /* updating the range since it's sorted using the start,
             * so we can check if the next ballon is outside our current range.
             * for example [1, 10], [2, 6], [7, 12].
             * we start with 10, and then we have 6 which is < 10,
             * if we didn't update the range, it will include [7, 12] with us, even though it's out of range [1, 10].
             */
            lastpoint = min(point[1], lastpoint);
        }
        return ans;
    }
};