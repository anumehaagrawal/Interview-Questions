int Solution::majorityElement(const vector<int> &A) {
    int prev = INT_MIN;
    int count =0;
    for(int i=0;i<A.size();i++){
        if(prev==INT_MIN||count==0){
            prev = A[i];
            count=1;
        }
        else if(A[i]==prev){
            count++;
        }
        else{
            count--;
        }
    }
    return prev;
}
