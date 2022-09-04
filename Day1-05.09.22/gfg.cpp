class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int ans = a[0] ;
      int curr = a[0] ;
      for(int i = 1 ; i < a.size() ; i++){
          curr+=a[i] ;
          ans = min(ans , curr) ;
          if(a[i] < curr){
              curr = a[i] ;
          }
          ans = min(ans , curr) ;
      }
      
      return ans ;
  }
};