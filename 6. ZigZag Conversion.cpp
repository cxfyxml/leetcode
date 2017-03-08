class Solution {
public:
    string convert(string s, int numRows) {
        string r = "";
        int pos=0, col = 0;
        if(numRows <= 1) return s;
        for(int i = 0; i < numRows; i++){
        	if(i == 0 || i == numRows-1){
        		pos = i;
        		while(pos < s.length()){
        			r.append(1,s[pos]);
        			pos += 2*numRows-2;
        		}
        	}else{
        		pos = i;
        		col = 0;
        		while(true){
        			if(col%2==0){
        				if(pos >= s.length())
        					break;
        				r.append(1,s[pos]);
        				pos += 2*numRows-2;
        			}else{
        				if(pos-2*i >= s.length())
        					break;
        				r.append(1,s[pos-2*i]);
        			}
        			col++;
        		}
        	}
        }
        return r;
    }
};