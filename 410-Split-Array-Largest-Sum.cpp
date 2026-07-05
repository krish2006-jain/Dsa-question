class Solution {
public:
    int calculatestudent(vector<int>&nums,int midd){
        int totalreq=1;
        int totaltime=0;
        for(int i=0;i<nums.size();i++){
            if(totaltime+nums[i]<=midd){
                totaltime+=nums[i];
            }
            else{
                totalreq++;
                totaltime=nums[i];
            }
        }
        return totalreq;
    }
    int splitArray(vector<int>& nums, int k) {
        if(nums.size()<k)return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int midd=(low+high)/2;
            int students=calculatestudent(nums,midd);
            if(students>k){
                 low=midd+1;
            }
            else{
                high=midd-1;
            }
        }
        return low;

    }
};