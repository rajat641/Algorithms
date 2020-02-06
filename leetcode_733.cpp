class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c,int sr, int sc, int newColor, int old){
        if(sr< 0 || sr>=r || sc <0 || sc>=c || image[sr][sc]==newColor) return ;
       //if(image[sr][sc]!=old &&image[sr][sc]!=newColor ) return;
        image[sr][sc ]=newColor;
        if(sr-1>=0 && image[sr-1][sc]==old) dfs(image, r,c,sr-1,sc,newColor, old);
        if(sr+1<r&& image[sr+1][sc]==old) dfs(image, r,c,sr+1,sc,newColor, old);
        if(sc-1>=0 && image[sr][sc-1]==old) dfs(image, r,c,sr,sc-1,newColor, old);
        if(sc+1<c && image[sr][sc+1]==old) dfs(image, r,c,sr,sc+1,newColor, old);
       // return ;
        
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int r = image.size();
        int c = image[0].size();
        int old = image[sr][sc];
   //     cout<< r<<" "<<c<<endl;
        dfs(image, r,c,sr,sc,newColor, old);
        return image;
        
        
    }
};
