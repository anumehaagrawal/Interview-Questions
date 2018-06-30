bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int> temp;
    for(int i=2;i<A-1;i++){
        if(isPrime(i) && isPrime(A-i)){
            temp.push_back(i);
            temp.push_back(A-i);
            break;
        }
    }
    return temp;
}