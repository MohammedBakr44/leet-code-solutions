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
             * we are looking for a x value, that bursts all the ballons in an interval, so we use the minimum end to see if there's is a value that meets that.
             * for example [[9,12],[1,10],[4,11],[8,12],[3,9],[6,9],[6,7]]
             * the least value is 7, but we have intervals starts from 8 and 9, if we hit 7 we will need another arrow to burst the remaining ballons.
             * But if we removed [6, 7], the least end becomes 9.
             * so we can use numebr 9, and it will cover all intervals.
             */
            lastpoint = min(point[1], lastpoint);
        }
        return ans;
    }
};