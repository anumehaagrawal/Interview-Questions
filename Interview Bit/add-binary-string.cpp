string Solution::addBinary(string A, string B) {
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    auto aS = A.length(), bS = B.length();
    int n = aS>=bS ? aS : bS;
    int c = 0;
    string result = "";
    for (auto i = 0; i<n; ++i)
    {
        int a = i < aS ? A[i] - '0' : 0;
        int b = i < bS ? B[i] - '0' : 0;
        int temp = a + b + c;
        c = temp / 2;
        result += to_string(temp%2);
    }
    if (c==1)
        result += to_string(c);
    reverse(result.begin(), result.end());
    return result;
    
    
}