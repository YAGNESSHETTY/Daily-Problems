bool f(int ind  , int target , vector<int>&arr , vector<vector<int>>&dp){
    if(target == 0) return true ;
    if(ind == 0) return (arr[0] == target) ;
    if(dp[ind][target] !=-1) return dp[ind][target] ;
    
    bool notTake = f(ind-1,target , arr ,dp) ;
    bool take = false ;
    if(arr[ind]<=target) take = f(ind-1 , target-arr[ind]  ,arr , dp) ;
    
    return dp[ind][target] = take|notTake ;
}

bool canPartition(vector<int> &arr, int n)
{
    int tot = 0 ;
    for(int i = 0 ; i < n ;i++){
        tot+=arr[i] ;
    }
    
    if(tot%2) return false ;
    else{
        int req = tot/2 ;
        vector<vector<int>>dp(n , vector<int>(req+1 , -1)) ;
        return f(n-1 , req, arr ,dp) ;
    }

}
