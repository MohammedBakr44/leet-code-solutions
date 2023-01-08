

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
       // y2 - y1 / x2 - x1
        int res = 1; 
        for(int i = 0; i < points.size(); i++) {
            unordered_map<double, int>mp;
            double p1_x = points[i][0];
            double p1_y = points[i][1];
            for(int j = i+1; j < points.size(); j++) {
                double p2_x = points[j][0];
                double p2_y = points[j][1];
                double slope = 0;
                if(p2_x == p1_x) {
                    slope = (1 << 30); // imitates infinity  
                } else {
                    slope = (double)(p2_y - p1_y) / (double)(p2_x - p1_x);
                }
                mp[slope]++;
                res = max(res, mp[slope]+1);
            }
        }
        return res;
    }
};