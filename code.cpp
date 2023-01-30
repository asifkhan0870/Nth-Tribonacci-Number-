

// 1.first method----->>>> Bottom up

class Solution {
public:
    
    const int N=1e6;
    
    int tribonacci(int n) {
        
        vector<int>dp(N);

        dp[0]=0;
        dp[1]=1;
        dp[2]=1;

        for(int i=3;i<=n;i++){

            dp[i]=dp[i-3]+dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};



// 2.second method ------>>>>> memeization 

class Solution {
public:
     
     const int N=1e9;

     int solve(int n,vector<int>&dp){

         if(n==0){
             return 0;
         }

         if(n==1 or n==2){
             return 1;
         }

         if(dp[n]!=-1){
             return dp[n];
         }

         return dp[n]=solve(n-3,dp)+solve(n-1,dp)+solve(n-2,dp);
     }
    

    int tribonacci(int n) {
        
        vector<int>dp(n+1);

        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }

        return solve(n,dp);
    }
};