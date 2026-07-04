class Solution {
public:
int sumofarray(vector<int>&weights){
    int sum=0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
    }
    return sum;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=sumofarray(weights);
        int low=*max_element(weights.begin(),weights.end());
        int high=sum;
        while(low<=high){

            int presdays=1;
            int midd=(low+high)/2;
             int total=midd;
            for(int i=0;i<weights.size();i++){
                 if(weights[i]<=total){
                    total-=weights[i];
                 }
                 else{
                    total=midd;
                    presdays++;
                    total-=weights[i];
                 }
            }
            if(presdays<=days){
                high=midd-1;
            }
            else{
                low=midd+1;
            }

        }
        return low;
    }
};