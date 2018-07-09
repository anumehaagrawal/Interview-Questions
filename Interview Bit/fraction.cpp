string Solution::fractionToDecimal(int A, int B) {
    map<int,int> mp;
    if(A==0){
        return "0";
    }
    string str ="";
    if(A>=0 && B<=0 || A<=0 && B>=0){
        str = str+'-';
    }
    int64_t a= A;
    int64_t b=B;
    a=abs(a);
    b=abs(b);
    if(a%b==0){
        str = str+to_string(a/b);
        return str;
    }
    else{
        int num = a/b;
        str = str+to_string(a/b);
        str=str+".";
        a=(a%b)*10;
        while(mp.find(a)==mp.end()){
             mp[a]=str.length();
            str=str+to_string(a/b);
           
            a=(a%b)*10;
            if(a==0)
                return str;
        }
    }
     str.insert(mp[a],1,'(');
    str=str+")";
    return str;

}