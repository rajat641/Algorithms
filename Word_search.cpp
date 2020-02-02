class Solution {
public:
    bool search(vector<vector<char>>& board,int x,int y,string word , int in){
       if(in == word.length()) return true;
       // if(in==word.length() && board[x][y]==word[in]) return true;
        if(x> board.size()-1 || x< 0 || y< 0 || y>board[0].size()-1 || board[x][y]!=word[in] ) return false;
        board[x][y]= '*';
        bool  res = search(board,x-1, y, word, in+1) ||
            search(board,x+1, y, word, in+1) ||
            search(board,x, y-1, word, in+1)||
            search(board,x, y+1, word, in+1);
        board[x][y]= word[in];
        return res;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
         int sz = word.size();
        if(sz==0) return false;
        int c = word[0];
        int row = board.size();
        int col = board[0].size();
        cout<< row<< " "<<col<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               // if(board[i][j]==c){
                    if(search(board,i, j, word, 0)) return true;
                //}
            }
        }
        return false;
        
    }
};
