vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
   
    sort(A.begin(),A.end());
    set<vector <int>> res;
    vector<int>p;
    p.resize(4);
    for(int i=0;i<A.size()-3;i++){
        
        for(int j=i+1;j<A.size()-2;j++){
            
           // if(A[j]==A[j+1]) continue;
            int target=B-A[i]-A[j];
            p[0]=A[i];
            p[1]=A[j];
            
            int k=j+1;
            int q=A.size()-1;
            while(k<q){
                
                int sum=A[k]+A[q];
                if(sum==target){
                    p[2]=A[k];
                    p[3]=A[q];
                    res.insert(p);
                    while(p[2]==A[k] && k<q) k++;
                  
                }
                else if(sum<target) k++;
                else     q--;
                
            }
        }
    }
    vector<vector<int>> v;
    set<vector<int>> ::iterator it;
    for(it=res.begin();it!=res.end();it++){
        v.push_back(*it);
    }
    return v;
}