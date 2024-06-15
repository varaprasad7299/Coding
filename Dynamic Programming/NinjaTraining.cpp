/*https://www.geeksforgeeks.org/problems/geeks-training/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=geeks-training*/

class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        int v0,v2,v1;
        v0=points[0][0];
        v1=points[0][1];
        v2=points[0][2];
      
        if(n==1) return max(v0,max(v1,v2));
        for(int i=1;i<n;i++){
            int f0 = points[i][0]+max(v1,v2);
            int f1 = points[i][1]+max(v0,v2);
            int f2 = points[i][2]+max(v1,v0);
            v0=f0;
            v1=f1;
            v2=f2;
        }
        return max(v0,max(v1,v2));
    }
};
