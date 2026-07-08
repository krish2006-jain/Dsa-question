class Solution {
public:
int maxele(vector<vector<int>>&mat,int n,int m,int cols){
    int maxelement=-1;
    int index=0;
    for(int i=0;i<n;i++){
        if(mat[i][cols]>maxelement){
            maxelement=mat[i][cols];
            index=i;
        }
    }
    return index;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int middle=(low+high)/2;
            int index=maxele(mat,n,m,middle);
            int left=middle-1 >=0 ?mat[index][middle-1]:-1;
            int right=middle+1 <m ?mat[index][middle+1]:-1;
            if(mat[index][middle]>left &&mat[index][middle]>right){
                return {index,middle};
            }
            else if(mat[index][middle]<left){
               high=middle-1;
            }
            else{
                low=middle+1;
            }
        }
        return {-1,-1};       
    }
};