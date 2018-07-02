int Solution::findMedian(vector<vector<int> > &A) {
    int start =0;
    int rows = A.size();
    int cols = A[0].size();
    int max = -999999;
    int min = 999999;
    for(int i=0;i<rows;i++){
        if(A[i][0]<min){
            min= A[i][0];
        }
    }
    for(int i=0;i<rows;i++){
        if(A[i][cols-1]>max){
            max= A[i][cols-1];
        }
    }
    int desired = (rows*cols+1)/2;
    
    while(min<max){
        int place =0;
        int mid = (min+max)/2;
        for(int i=0;i<rows;i++){
            place = place+upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        if(place<desired){
            min = mid+1;
        }
        else{
            max = mid;
        }
        
    }
    return min;
}
