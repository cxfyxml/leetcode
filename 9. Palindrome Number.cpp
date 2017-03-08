class Solution {
public:
    bool isPalindrome(int x) {
    	int c=1,d=x;
        if(x>=0 && x<10)
        	return true;
        else if(x<0 || x%10==0)
        	return false;
        else{
        	while(d/10 != 0){
        		d = d/10;
        		c = c*10;
        	}
        	while(x>9){
        		if(x/c != x%10)
        			return false;
        		x = x - (x/c)*c;
        		x = x/10;
        		c = c/100;
        	}
        	if(c<=1||x==0)
        	    return true;
            else
            	return false;
        }
    }
};