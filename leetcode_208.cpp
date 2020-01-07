class Trie {
public:
    struct node{
        char x;
        unordered_map< char ,struct node*  > m;
        bool ends;
    };
    
   struct node* h =NULL;
   // struct node head; 
    //head.x = '1'; head.ends = false;
    /** Initialize your data structure here. */
    Trie() {
        h = new struct node();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        int sz = word.size();
        struct node* x = h;
        cout<<x->m.size()<<endl;
        for(int u=0;u<sz;u++){
            if(x->m.find(word[u])==x->m.end()){
                struct node* chara = new struct node();
                chara->x = word[u];
                chara->ends = false;
                x->m[word[u]] = chara;
                x = chara;
            }
           else x = x->m[word[u]];
        }
        x->ends = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        //if(h->x =='1') return false;  
        struct node* x = h;
        for(int u=0;u<word.size();u++){
            if(x->m.find(word[u])==x->m.end()) return false;
            else x = x->m[word[u]];
            
        }
        if(x->ends==true) return true;
        return false;
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
       struct node* x = h;
        for(int u=0;u<prefix.size();u++){
            if(x->m.find(prefix[u])==x->m.end()) return false;
            else x = x->m[prefix[u]];
            
        }
      //  if(x->ends==true) return true
        return true;
        
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
