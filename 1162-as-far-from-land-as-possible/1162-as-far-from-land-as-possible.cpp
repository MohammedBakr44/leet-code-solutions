class Solution {
public:
    const int x[4]={-1,1,0,0}; 
    const int y[4]={0,0,1,-1};
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j]) {
                    q.push({i, j});
                }
            }
        }
        
        int steps = 0;
        int i, j;
        
        while(!q.empty()) {
                     int size=q.size();

          for(int s=0;s<size;++s){ 
     
            i=q.front().first;
            j=q.front().second;
            q.pop();
             
            for(int k=0;k<4;++k){

                int in=i+x[k];
                int jn=j+y[k]; 

                if(in<0 || jn<0 || in>=n || jn>=n || grid[in][jn]==1){
                   continue;
                } 
                grid[in][jn]=1; 
                q.push({in,jn}); 
                        
               }

          }

           steps++;
        } 
        
        return (steps==1?-1:steps-1);
    }
};