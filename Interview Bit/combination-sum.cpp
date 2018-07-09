   void dfs(vector<int> &candidates, int target, set<vector<int> > &res, vector<int> &r, int i){
        if (target<0){
            return;
        }else{
            if (target==0){
                res.insert(r);
            }else{
                while (i<candidates.size() && target-candidates[i]>=0){
                    r.push_back(candidates[i]);
                    dfs(candidates,target-candidates[i],res,r,i);
                    i++;
                    r.pop_back();
                }
            }
        }
         
    }
    vector<vector<int> > Solution::combinationSum(vector<int> &candidates, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        set<vector<int> > res;
        
        sort(candidates.begin(),candidates.end());
        vector<int> r;
        dfs(candidates,target,res,r,0);
        vector<vector<int>> vv;
        set <vector<int>> :: iterator itr;
         for (itr =res.begin(); itr != res.end(); ++itr)
            {
                vv.push_back(*itr);
            }
        return vv;
    }

