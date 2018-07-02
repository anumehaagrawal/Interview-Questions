string Solution::countAndSay(int A) {
    string result="";
    if(!A){
        return result;
    }
    string str ="1";
    int count =1;
    for(int i=1;i<A;i++){
        int num = str.length();
        for(int j=0;j<num;j++){
            if(j+1!=num && str[j]==str[j+1]){
                ++count;
            }
            else{
               result = result +to_string(count)+str[j]; 
               count=1;
            }
        }
        str = result;
        result.clear();
    }
    return str;
}
