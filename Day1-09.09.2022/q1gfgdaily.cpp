string digitsNum(int N)
	{
	    string fin="" ;
	    int dum = N ;
	    while(N>0){
	        if(N>=9){
	            fin+='9' ;
	            N-=9 ;
	        }
	        else{
	            fin+=(N+'0') ;
	            N= 0 ;
	        }
	    }
	    
	    reverse(fin.begin() , fin.end()) ;
	    int s = 0 ;
	    while(s < dum){
	        fin+='0' ;
	        s++ ;
	    }
	    
	    return fin ;
	}
