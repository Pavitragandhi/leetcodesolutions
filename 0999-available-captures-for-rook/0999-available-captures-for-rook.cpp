class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rookrow , rookcol;
        int count = 0;
        
        for(int i = 0; i<8; i++){
            for(int j = 0; j<8; j++){
                if(board[i][j] == 'R'){
                    rookrow = i;
                    rookcol = j;
                    break;
                }
            }
        }
        
        for(int i = rookrow - 1; i>=0; i--){
            if(board[i][rookcol] == 'p'){
                count++;
                break;
            }
            else if(board[i][rookcol] == 'B'){
                break;
            }
        }
        
        for(int i = rookrow + 1; i<8; i++){
            if(board[i][rookcol] == 'p'){
                count++;
                break;
            }
            else if(board[i][rookcol] == 'B'){
                break;
            }
        }
        
        for(int i = rookcol - 1; i>=0; i--){
            if(board[rookrow][i] == 'p'){
                count++;
                break;
            }
            else if(board[rookrow][i] == 'B'){
                break;
            }
        }
        
        for(int i = rookcol + 1; i<8; i++){
            if(board[rookrow][i] == 'p'){
                count++;
                break;
            }
            else if(board[rookrow][i] == 'B'){
                break;
            }
        }
        return count;
    }
};