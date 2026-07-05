class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        int missing=0; 
        int low=1;
        int high=arr.size()+k;
        while(low<=high &&count !=arr.size()){
            if(low==arr[count]){
                low++;
                count++;
            }
            else{
            missing++;
            if(missing==k){
                return low;
            }
            else{
                low++;
            }
            }
        }
        
        return low+k-missing-1;
    }
};