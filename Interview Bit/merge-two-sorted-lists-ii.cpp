void Solution::merge(vector<int> &A, vector<int> &B) {
   int len = A.size()+B.size()-1;
   int c1 = A.size()-1;
   int c2 = B.size()-1;
   for(int j=c1+1;j<c1+c2+2;j++){
       A.push_back(-1);
   }

   int i;
   for(i=len;i>=0;i--){
       if(c1<0 || c2<0){
           break;
       }
       if(A[c1]>B[c2]){
           A[i]=A[c1];
           c1--;
       }
       else{
           A[i]=B[c2];
           c2--;
       }
   }
   while(i>=0 && c1>=0){
       A[i--]=A[c1--];
   }
   while(i>=0 && c2>=0){
       A[i--]=B[c2--];
   }
   
}