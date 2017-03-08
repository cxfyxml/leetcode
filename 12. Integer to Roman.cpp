class Solution {
public:
    string intToRoman(int num) {
    	string r;
    	int c = num/1000;
        if(c !=0){
        	r.append(c,'M');
        	num = num %1000;	
        }
        c = num/100;
        if(c !=0){
        	if(c<=3)
        		r.append(c,'C');
        	else if(c==4)
        		r.append("CD");
        	else if(c>=5 && c<=8){
        		r.append(1,'D');
        		r.append(c-5,'C');
        	}else{
        		r.append("CM");
        	}
        	num = num %100;
        }
        c = num/10;
        if(c!=0){
        	if(c<=3)
        		r.append(c,'X');
        	else if(c==4)
        		r.append("XL");
        	else if(c>=5 && c<=8){
        		r.append(1,'L');
        		r.append(c-5,'X');
        	}else{
        		r.append("XC");
        	}
        	num = num %10;
        }
        c = num;
        if(c!=0){
        	if(c<=3)
        		r.append(c,'I');
        	else if(c==4)
        		r.append("IV");
        	else if(c>=5 && c<=8){
        		r.append(1,'V');
        		r.append(c-5,'I');
        	}else{
        		r.append("IX");
        	}
        }
        return r;	
    }
};