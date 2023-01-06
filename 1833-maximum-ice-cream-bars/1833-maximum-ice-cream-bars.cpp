class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
      sort(costs.begin(), costs.end());
      int count = 0;
      int total_cost = 0;
      int i = 0;
      for(int i = 0; i < costs.size(); i++) {
          if(total_cost <= coins && (total_cost + costs[i]) <= coins) {
              total_cost += costs[i];
              count++;
          } else {
              return count;
          }
      }
        return count;
    }
};