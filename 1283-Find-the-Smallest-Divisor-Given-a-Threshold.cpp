class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1;
        int high=maxi;
        while(low<=high){
            int midd=(low+high)/2;
            int total=0;
            for(int i=0;i<nums.size();i++){
                total+= ceil((double) nums[i]/(double)midd);
            }
            if(total<=threshold){
                high=midd-1;
            }
            else{
                low=midd+1;
            }
        }
        return low;
    }
};