int Solution::largestRectangleArea(vector<int> &A) {
    stack<int> st;
    int i=0;
    int n= A.size();
    int maxa = INT_MIN;
    while(i<n){
        if(st.empty()|| A[st.top()]<=A[i]){
            st.push(i);
            i++;
        }
        else{
            int num = st.top();
            int temp;
            st.pop();
            if(st.empty()){
                temp=A[num]*i;
            }
            else{
                temp = A[num]*(i-num-1);
            }
            maxa=max(temp,maxa);
        }
    }
    while(!st.empty()){
        int num = st.top();
            int temp;
            st.pop();
            if(st.empty()){
                temp=A[num]*i;
            }
            else{
                temp = A[num]*(i-num-1);
            }
            maxa=max(temp,maxa);
    }
    return maxa;
}
