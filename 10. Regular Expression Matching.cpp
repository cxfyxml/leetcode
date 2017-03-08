class Solution {
public:
    bool isMatch(string s, string p) {
    	int sl = s.length(), pl = p.length();
    	int i = pl-1,j = sl-1, flag=0;
    	bool result = false;
        while(i>=0){
        	if(p[i]=='*'){
        		i--;
        		flag=1;
        		if(i>=0){
        			result = result || isMatch(s.substr(0,j+1),p.substr(0,i));
        			if(p[i]=='.'){
        				while(j>=0){
        					result = result || isMatch(s.substr(0,j),p.substr(0,i));
        					if(result)
        						break;
        					j--;
        				}
        			}else{
        				while(j>=0 && p[i]==s[j]){
        					result = result || isMatch(s.substr(0,j),p.substr(0,i));
        					if(result)
        						break;
        					j--;
        				}
        			}
        		}
        		break;
        	}else{
        		if(j<0) break;
        		if(p[i]==s[j] || p[i]=='.'){
        			j--;
        		}else{
        			return false;
        		}
        	}
        	i--;
        }
        if(j==-1 && i==-1)
        	return true;
        else
        	if(flag)
        		return result;
        	else
        		return false;
    }
};