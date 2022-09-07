class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int>s ;
        int j = 0 ;
        int n = N ;
        for(int i=0; j < n && i<=n ;){
            if(!s.empty() && B[j] == s.top()){
                s.pop() ;
                j++ ;
            }
            else{
                s.push(A[i]) ;
                i++ ;
            }
        }
        
        if(s.empty()){
            return 1 ;
        }
        else{
            return 0 ;
        }
    }
};
