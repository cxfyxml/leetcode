class Solution {
public:
    int reverse(int x) {
    	int flag=0;
        if(x==0)
        	return 0;
        if(x<0){
        	x = -x;
        	flag = 1;
        }
        long int r=0;
        while(true){
        	r += x%10;
        	x /= 10;
        	if(x==0)
        		break;
			r *= 10;
        }
        if(r!=(int)r) return 0;
        if(flag)	
        	return -r;
        else
        	return r;
        
    }
};