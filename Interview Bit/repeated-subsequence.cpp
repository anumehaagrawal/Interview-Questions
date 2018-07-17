#define MAX_CHAR 256
int palindr(string b, int l ,int h){
    while(l<h){
        if(b[l++]!= b[h--]){
            return 0;
        }
    }
    return 1;
}
int checkPal(string A){
    map<char,int>mp;
    for(int i=0;i<A.length();i++){
        mp[A[i]]++;
    }
    string s="";
    for(int i=0;i<A.size();i++){
        if(mp[A[i]]>1){
            s=s+A[i];
        }
       
    }
    if(s.length()==0){
        return 0;
    }
    if(mp.size()==1){
        return 1;
    }
  
    int num = palindr(s,0,s.length()-1);
    if(num==1){
        return 0;
    }
    else{
        return 1;
    }
}
int Solution::anytwo(string A) {
    return checkPal(A);
}
