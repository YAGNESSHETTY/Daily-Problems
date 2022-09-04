// binary ecponentiation 


// first method
// relatively slow as it uses recursion stack cells 


int binpow(int a , int b){
    /* a to the power n
    if n == 1 return 1 
    if n%2 = 0 convert a to a**2 and n to n/2 
    else a to a**2 and n to n-1/2
    */

    int res = binpow(a , b/2) ; 
    if(b%2 == 0){
        return res*res ;
    }
    else{
        return res*res*a ;
    }

}

// second method 

int binpow(int a , int b){
    int res =1 ;
    while(b > 0){
        if(b&1 == 1){ //same as checking b%2 == 1
            res*= a ;
        }
        a = a*a ;
        b>>=1 ;
    }
}







