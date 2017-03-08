class Solution {
public:
    int maxArea(vector<int>& height) {
    	int max=0;
        for(int i=0,j=height.size()-1; i<j;){
        	max = getmax(getmin(height[i],height[j])*(j-i),max);
        	if(height[i]>height[j])
        		j--;
        	else
        		i++;
        }
        return max;
    }
    int getmin(int a, int b){
    	return a>b?b:a;
    }
    int getmax(int a, int b){
    	return a>b?a:b;
    }
};