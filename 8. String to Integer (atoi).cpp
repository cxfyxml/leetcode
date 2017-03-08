class Solution {
public:
    int myAtoi(string str) {
    	int flag=0,i=0,j=0;
    	long int r =0;
        while(str[i]==' '||str[i]=='\t'||str[i]=='\n'){ 
        	i++;
        }
        if(str[i]=='-'){
        		flag=1;
        		i++;
        }else if(str[i]=='+'){
        	i++;
        }	
        while(i<str.length()){
        	if(str[i]>'9' || str[i]<'0')
        		break;
        	r = r*10 + int(str[i]-'0');
        	i++;
        	j++;
        }
        if(flag){
        	r = -r;
        	if(r<=INT_MIN||j>10)
        		return INT_MIN;
        	else
        		return r;
        }else{
        	if(r>=INT_MAX||j>10)
        		return INT_MAX;
        	else
        		return r;
        }
    }
};