int Solution::braces(string A) {
    stack<char> st;
    int n=A.size();
    int count =0;

    for(int i=0;i<n;i++){
        if(A[i]== '('  || st.empty()){
            st.push(A[i]);
        }
        else {
            if(A[i]==')' ){
            int count =0;
            while(!st.empty() && st.top()!='('){
                if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                    count++;
                }
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
            if (count==0){
                return 1;
            }
            count =0;
        }
        else{
            st.push(A[i]);
        }
        }
    }
     return 0;
    
}