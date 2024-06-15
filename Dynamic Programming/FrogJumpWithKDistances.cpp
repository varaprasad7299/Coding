/*In the previous question, the frog was allowed to jump either one or two steps at a time.
In this question, the frog is allowed to jump up to ‘K’ steps at a time. 
If K=4, the frog can jump 1,2,3, or 4 steps at every index.*/



class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
          vector<int>ans(n);
        for(int i=1;i<n;i++){
            int v=INT_MAX;
            for(int j=1;j<=k;j++){
                if(i-j>=0){
                    v = min(v,ans[i-j] + abs(height[i]-height[i-j]));
                }
            }
            ans[i]=v;
        }
        return ans[n-1];
    }
};
