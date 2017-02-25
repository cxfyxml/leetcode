class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size()+nums2.size();
        if(total%2==1){
        	return findk(nums1, nums1.size(), nums2, nums2.size(), total/2+1);
        }else{
        	return (findk(nums1, nums1.size(), nums2, nums2.size(), total/2)+findk(nums1, nums1.size(), nums2, nums2.size(), total/2+1))/2.0;
        }
    }
 	int min(int a,int b){
		return a>b?b:a;
	}
 	int findk(vector<int>& a, int na, vector<int>& b, int nb, int k){
 		if(na > nb) return findk(b,nb,a,na,k);
 		if(na == 0) return b[k-1];
 		if(k == 1) return min(a[0],b[0]);
 		int ka = min(k/2,na);
 		int kb = k - ka;
 		vector<int> a1;
 		vector<int> b1;
 		if(a[ka-1]<b[kb-1]){
 			a1.assign(a.begin() + ka, a.end());
 			return findk(a1, na - ka, b , nb, k-ka);
 		}
 		else if(a[ka-1]>b[kb-1]){
 			b1.assign(b.begin() + kb, b.end());
 			return findk(a, na, b1, nb - kb, k - kb);
 		}
 		else
 			return a[ka-1];
 	} 
};