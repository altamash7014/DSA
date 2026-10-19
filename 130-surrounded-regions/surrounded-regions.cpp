class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c) {
        int n = grid.size();
        int m = grid[0].size();

        if(r < 0 || c < 0 || r >= n || c >= m) {
            return;
        }

        // DIFFERENCE 1: Check for letter 'O'
        if(grid[r][c] != 'O') {
            return;
        }

        // DIFFERENCE 2: Mark safe cells temporarily
        grid[r][c] = '#';

        dfs(grid, r+1, c);
        dfs(grid, r-1, c);
        dfs(grid, r, c+1);
        dfs(grid, r, c-1);
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if(n == 0) return;
        int m = board[0].size();

        // Top and bottom boundaries
        for(int j = 0; j < m; j++) {
            dfs(board, 0, j);
            dfs(board, n-1, j);  // DIFFERENCE 3: n-1
        }

        // Left and right boundaries
        for(int i = 0; i < n; i++) {
            dfs(board, i, 0);
            dfs(board, i, m-1);  // DIFFERENCE 4: m-1
        }

        // Final conversion
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                else if(board[i][j] == '#') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};