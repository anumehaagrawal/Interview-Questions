struct TrieNode{
    TrieNode* child[26];
    bool unique;
    
    TrieNode(){
        for(int i = 0; i < 26; i++){
            child[i] = NULL;
        }
        unique = true;
    }
};

void makeTrie(TrieNode* root, string s){
    TrieNode* curr = root;
    
    int i = 0;
    int a = s[i] - 97;
    while(i < s.size()){
        if(curr->child[a] == NULL){
            TrieNode* node = new TrieNode();
            curr->child[a] = node;
        }
        else{
            (curr->child[a])->unique = false;
        }
        curr = curr->child[a];
        i++;
        if(i != s.size()){
            a = s[i] - 97;
        }
    }
}

string getPre(TrieNode* root, string s){
    string sol = "";
    
    TrieNode* curr = root;
    
    if(s.size() == 0){
        return sol;
    }
    
    int i = 0;
    
    do{
        curr = curr->child[s[i]-97];    
        sol = sol + s[i];
        i++;   
    }while(i < s.size() && curr->unique == false);
    
    return sol;
}

vector<string> Solution::prefix(vector<string> &A) {
    vector<string> sol;   
    TrieNode* root = new TrieNode();
    
    for(int i = 0; i < A.size(); i++){
        makeTrie(root, A[i]);
    }
    
    for(int i = 0; i < A.size(); i++){
        sol.push_back(getPre(root, A[i]));
    }
    
    return sol;  
}