int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
  int a=A.size();
  int b=B.size();
  int c=C.size();
  int diff = INT_MAX;  // Initialize min diff

    int i=0,j=0,k=0;
    while (i < a && j < b && k < c)
    {
    
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));
        diff = min(diff,abs(maximum-minimum));
 
        if (diff == 0) break;
 
        // Increment index of array with smallest value
        if (A[i] == minimum) i++;
        else if (B[j] == minimum) j++;
        else k++;
    }
    return diff;
}