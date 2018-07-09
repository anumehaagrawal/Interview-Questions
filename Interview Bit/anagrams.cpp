vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    map<string,vector<int>> mp;
    vector<vector<int> > vect;
    vector<string> s;
    for(int i=0;i<A.size();i++){
        s.push_back(A[i]);
        sort(s[i].begin(),s[i].end());
    }
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])==mp.end()){
            vector<int> v;
            v.push_back(i+1);
            mp[s[i]]=v;
        }
        else{
            mp[s[i]].push_back(i+1);
        }
    }
    map<string,vector<int>> ::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        vect.push_back(it->second);
    }
    return vect;
}