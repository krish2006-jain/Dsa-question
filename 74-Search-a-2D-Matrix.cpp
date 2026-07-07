class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())return false; 
        int low=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int high=(n*m)-1;
        while(low<=high){
            int middle=(low+high)/2;
            if(matrix[middle/m][middle%m ]==target){
                return true;
            }
            else if(matrix[middle/m][middle%m ]<target){
             low=middle+1;
            }
            else{
                high=middle-1;
            }
            
        }
        return false;
        
    }
};