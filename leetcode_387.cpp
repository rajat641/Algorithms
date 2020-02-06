class Solution {
public:
    int firstUniqChar(string s) {
        queue< int >q;
        int sz = s.size();
        if(sz==0) return -1;
        
        if(sz==1) return 0;
        map< char , int > m;
        for(int u=0;u<sz;u++){
            if(q.empty()){
                q.push(u);
                m[s[u]]++;
            }else{
                m[s[u]]++;
                q.push(u);
                while(!q.empty() && m[s[q.front()]]>1) q.pop();
            }
            
        }
        while(!q.empty() && m[s[q.front()]]>1) q.pop();
        if(q.empty()) return -1;
        else return q.front();
        
        
    }
};
