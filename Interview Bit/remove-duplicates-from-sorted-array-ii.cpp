int Solution::removeDuplicates(vector<int> &A) {
    int j=1;
    int count =0;
   for(int i=1;i<A.size();i++){
       if(A[i]==A[i-1] && count >=1){
           
           continue;
       }
       else if(A[i]!=A[i-1]){
           count =0;
           A[j]=A[i];
           j++;
       }
       else{
           A[j]=A[i];
           j++;
           count++;
       }
   }
   for(int i=A.size()-1;i>=j;i--){
       A.pop_back();
   }
   return j;
}