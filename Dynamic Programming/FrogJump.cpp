/* Given a number of stairs and a frog, the frog wants to climb from the 0th stair to the (N-1)th stair. 
At a time the frog can climb either one or two steps. A height[N] array is also given. 
Whenever the frog jumps from a stair i to stair j, the energy consumed in the jump is abs(height[i]- height[j]), where abs() means the absolute difference. 
We need to return the minimum energy that can be used by the frog to jump from stair 0 to stair N-1.*/


class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>ans(n);
        for(int i=1;i<n;i++){
            int v1=INT_MAX,v2=INT_MAX;
            if(i-1>=0){
                v1 = ans[i-1] + (abs(height[i]-height[i-1]));
            }
            if(i-2>=0){
                v2 = ans[i-2] + abs(height[i]-height[i-2]);
            }
            ans[i]=min(v1,v2);
        }
        return ans[n-1];
    }
};
