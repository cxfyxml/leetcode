class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	string l;
    	int pos = 0,count=0,max=0;
        for(int i=0;i<s.length();i++){
        	pos = l.find(s[i]);
        	l.append(1,s[i]);
        	count++;
        	if(pos>=0){
        		l = l.substr(pos+1,l.length()-pos);
        		if(count-1>=max){
        			max = count-1;
        		}
        		count = count-pos-1;
        	}
        }
        if(count>=max)	max = count;
        return max;
    }
};