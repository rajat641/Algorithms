class MapSum {
public:
    /** Initialize your data structure here. */
    struct node{
        char x;
        bool ends = false;
        map< char, struct node* > m;
        int sum =0;
    };
    struct node * head =NULL;
    set< string > dup;
    MapSum() {
         head = new struct node();
        
    }
    
    void insert(string key, int val) {
        int sz = key.size();
        int fl  =0;
        struct node * start = head;
        if(dup.find(key)== dup.end()){
            dup.insert(key);
        }
        else fl =1;
        for(int u=0;u<sz;u++){
            if(start->m.find(key[u])==start->m.end()){
                struct node * newt = new struct node();
                newt->x = key[u];
                newt->sum =val;
                start->m[key[u]]= newt;
                start = newt;
                
            }else{
                start = start->m[key[u]];
                if(fl) start->sum= val;
                else start->sum +=val;
            }
        }
        start->ends = true;
        
    }
    
    int sum(string prefix) {
        int sz= prefix.size();
        struct node * s = head;
        for(int u=0;u<sz;u++){
            if(s->m.find(prefix[u])!= s->m.end()) s = s->m[prefix[u]];
            else return 0;
        }
        return s->sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
