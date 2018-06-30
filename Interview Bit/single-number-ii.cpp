int three(const vector<int> &v){
    int var1 = 0;
    int var2 =0;
    for(int i=0;i<v.size();i++){
        var2 = var2 | (var1&v[i]);
        var1 =  var1^v[i];
        int var3 = ~(var1 & var2);
        var1 = var1 & var3;
        var2 = var2 & var3;
    }
    return var1;
}
int Solution::singleNumber(const vector<int> &A) {
    
    return three(A);
}
