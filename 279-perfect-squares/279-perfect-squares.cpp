class Solution {
public:
//     int makeNum(vector<int>& v,int n,int idx,int size){
//         if(n==0){
//             return 0;
//         }
//         if(idx>=size){
//             return 100000;
//         }
//         int add=100000;
//         if(n-v[idx]>=0){
//             add= 1+ makeNum(v,n-v[idx],idx,size);
//         }
//         int notadd=makeNum(v,n,idx+1,size);
        
//         return min(add,notadd);
//     }
    int numSquares(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            if(i*i<=n){
                v.push_back(i*i);
            }
        }
        // int idx=0;
        int size=v.size();
        vector<vector<int>>dp(size+1,vector<int>(n+1,10000));
        for(int i=0;i<=size;i++){
            for(int j=0;j<=n;j++){
                if(i==0){
                    dp[i][j]=10000;
                }
                if(j==0){
                    dp[i][j]=0;
                }
            }
        }
      
        for(int i=1;i<=size;i++){
            for(int j=1;j<=n;j++){
               int add=10000;
                if(j-v[i-1]>=0){
                    add=dp[i][j-v[i-1]]+1;
                }
                int notAdd=dp[i-1][j];
                dp[i][j]=min(add,notAdd);
            }
        }
        return dp[size][n];
      //  int ans=makeNum(v,n,idx,size);
     //   return ans;
    }
};