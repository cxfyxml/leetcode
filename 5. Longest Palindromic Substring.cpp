class Solution {
public:
    string longestPalindrome(string s) {
    	int max=0, pos=0, j=0;
        for(int i=0; i<s.length(); i++){
            j=0;
        	if(s[i]==s[i+1]){
        		while(i-j>=0&&i+j+1<s.length()){
        			if(s[i-j] != s[i+1+j]){
        				break;
        			}
        			j++;
        		}
        		if(max<2*j){
        			max=2*j;
        			pos=i;
        		}
        	}
        	j=0;
        	if(s[i]==s[i+2]){
        		while(i-j>=0&&i+j+2<s.length()){
        			if(s[i-j] != s[i+2+j]){
        				break;
        			}
        			j++;
        		}
        		if(max<2*j+1){
        			max=2*j+1;
        			pos=i;
        		}
        	}
        }
        if(max==0)
        	return s.substr(0,1);
        else
        	return s.substr(pos-max/2+1,max);
    }
};