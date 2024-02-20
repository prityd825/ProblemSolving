#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int ROWS = 6;
const int COLS = 7;
const int EMPTY = 0;
const int PLAYER_PIECE = 1;
const int OPPONENT_PIECE = 2;
const int WINNING_SCORE = 1000000;

// Function prototypes
int minimax(vector<vector<int>>& board, int depth, int alpha, int beta, bool isMaximizing);
int evaluate(const vector<vector<int>>& board);
bool isMoveValid(const vector<vector<int>>& board, int col);
void dropPiece(vector<vector<int>>& board, int col, int piece);
bool isGameOver(const vector<vector<int>>& board);
void printBoard(const vector<vector<int>>& board);

int main() {
    vector<vector<int>> board(ROWS, vector<int>(COLS, EMPTY));
    int currentPlayer = PLAYER_PIECE;

    while (!isGameOver(board)) {
        printBoard(board);

        if (currentPlayer == PLAYER_PIECE) {
            int playerMove;

            // Get valid player move
            do {
                cout << "Enter your move (1-7): ";
                cin >> playerMove;
            } while (!isMoveValid(board, playerMove - 1));

            dropPiece(board, playerMove - 1, PLAYER_PIECE);
        } else {
            // Computer's turn
            int bestMove = -1;
            int bestScore = numeric_limits<int>::min();
            for (int col = 0; col < COLS; ++col) {
                if (isMoveValid(board, col)) {
                    dropPiece(board, col, OPPONENT_PIECE);
                    int score = minimax(board, 4, numeric_limits<int>::min(), numeric_limits<int>::max(), false);
                    dropPiece(board, col, EMPTY); // Undo the move
                    if (score > bestScore) {
                        bestScore = score;
                        bestMove = col;
                    }
                }
            }

            dropPiece(board, bestMove, OPPONENT_PIECE);
            cout << "Computer placed a piece in column " << bestMove + 1 << endl;
        }

        currentPlayer = 3 - currentPlayer; // Switch player
    }

    printBoard(board);
    if (evaluate(board) == WINNING_SCORE) {
        cout << "Computer wins!" << endl;
    } else if (evaluate(board) == -WINNING_SCORE) {
        cout << "Player wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}

// Implementation of Minimax algorithm with alpha-beta pruning

int minimax(vector<vector<int>>& board, int depth, int alpha, int beta, bool isMaximizing) {
    // Base cases
    if (depth == 0 || isGameOver(board)) {
        return evaluate(board);
    }

    // Maximizing player
    if (isMaximizing) {
        int maxScore = numeric_limits<int>::min();
        for (int col = 0; col < COLS; ++col) {
            if (isMoveValid(board, col)) {
                dropPiece(board, col, OPPONENT_PIECE);
                int score = minimax(board, depth - 1, alpha, beta, false);
                dropPiece(board, col, EMPTY); // Undo the move
                maxScore = max(maxScore, score);
                alpha = max(alpha, score);
                if (beta <= alpha) {
                    break; // Beta cutoff
                }
            }
        }
        return maxScore;
    }

    // Minimizing player
    else {
        int minScore = numeric_limits<int>::max();
        for (int col = 0; col < COLS; ++col) {
            if (isMoveValid(board, col)) {
                dropPiece(board, col, PLAYER_PIECE);
                int score = minimax(board, depth - 1, alpha, beta, true);
                dropPiece(board, col, EMPTY); // Undo the move
                minScore = min(minScore, score);
                beta = min(beta, score);
                if (beta <= alpha) {
                    break; // Alpha cutoff
                }
            }
        }
        return minScore;
    }
}
// Evaluate the board state
int evaluate(const vector<vector<int>>& board) {
    int rows = board.size();
    int cols = board[0].size();

    // Check for wins horizontally
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col <= cols - 4; ++col) {
            int count = 0;
            int currentPlayer = board[row][col];
            if (currentPlayer == EMPTY) continue;
            for (int k = 0; k < 4; ++k) {
                if (board[row][col + k] == currentPlayer) {
                    count++;
                } else {
                    count = 0;
                    break;
                }
            }
            if (count == 4) {
                if (currentPlayer == PLAYER_PIECE) return WINNING_SCORE;
                else return -WINNING_SCORE;
            }
        }
    }

    // Check for wins vertically
    for (int col = 0; col < cols; ++col) {
        for (int row = 0; row <= rows - 4; ++row) {
            int count = 0;
            int currentPlayer = board[row][col];
            if (currentPlayer == EMPTY) continue;
            for (int k = 0; k < 4; ++k) {
                if (board[row + k][col] == currentPlayer) {
                    count++;
                } else {
                    count = 0;
                    break;
                }
            }
            if (count == 4) {
                if (currentPlayer == PLAYER_PIECE) return WINNING_SCORE;
                else return -WINNING_SCORE;
            }
        }
    }

    // Check for wins diagonally (from top-left to bottom-right)
    for (int row = 0; row <= rows - 4; ++row) {
        for (int col = 0; col <= cols - 4; ++col) {
            for (int k = 0; k < 4; ++k) {
                int count = 0;
                int currentPlayer = board[row + k][col + k];
                if (currentPlayer == EMPTY) continue;
                for (int d = 0; d < 4; ++d) {
                    if (board[row + k - d][col + k - d] == currentPlayer) {
                        count++;
                    } else {
                        count = 0;
                        break;
                    }
                }
                if (count == 4) {
                    if (currentPlayer == PLAYER_PIECE) return WINNING_SCORE;
                    else return -WINNING_SCORE;
                }
            }
        }
    }

    // Check for wins diagonally (from top-right to bottom-left)
    for (int row = 0; row <= rows - 4; ++row) {
        for (int col = 3; col < cols; ++col) {
            for (int k = 0; k < 4; ++k) {
                int count = 0;
                int currentPlayer = board[row + k][col - k];
                if (currentPlayer == EMPTY) continue;
                for (int d = 0; d < 4; ++d) {
                    if (board[row + k - d][col - k + d] == currentPlayer) {
                        count++;
                    } else {
                        count = 0;
                        break;
                    }
                }
                if (count == 4) {
                    if (currentPlayer == PLAYER_PIECE) return WINNING_SCORE;
                    else return -WINNING_SCORE;
                }
            }
        }
    }

    // If no winner is found, return 0
    return 0;
}

// Check if a move is valid in the given column
bool isMoveValid(const vector<vector<int>>& board, int col) {
    return board[0][col] == EMPTY;
}

// Drop a piece into the given column
void dropPiece(vector<vector<int>>& board, int col, int piece) {
    for (int row = ROWS - 1; row >= 0; --row) {
        if (board[row][col] == EMPTY) {
            board[row][col] = piece;
            break;
        }
    }
}

// Check if the game is over
bool isGameOver(const vector<vector<int>>& board) {
    // Check if the board is full
    for (int col = 0; col < COLS; ++col) {
        if (board[0][col] == EMPTY) {
            return false;
        }
    }
    return true;
}

// Print the current board state
void printBoard(const vector<vector<int>>& board) {
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            char piece;
            if (board[row][col] == EMPTY) piece = '-';
            else if (board[row][col] == PLAYER_PIECE) piece = 'X';
            else piece = 'O';
            cout << piece << " ";
        }
        cout << endl;
    }
    cout << "---------------" << endl;
}
