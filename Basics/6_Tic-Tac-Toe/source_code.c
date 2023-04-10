#include <stdio.h>
#include <stdbool.h>

void print_board(char board[3][3]);
bool check_win(char board[3][3], char player);
bool check_tie(char board[3][3]);

int main() {
    char board[3][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'}};
    char player = 'X';
    int choice;
    bool game_over = false;

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1: X\nPlayer 2: O\n");

    while (!game_over) {
        print_board(board);

        printf("Player %c, enter a number (1-9): ", player);
        scanf("%d", &choice);

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("That square is already occupied. Please try again.\n");
        } else {
            board[row][col] = player;

            if (check_win(board, player)) {
                printf("Congratulations! Player %c wins!\n", player);
                game_over = true;
            } else if (check_tie(board)) {
                printf("The game is a tie!\n");
                game_over = true;
            } else {
                player = (player == 'X') ? 'O' : 'X';
            }
        }
    }

    print_board(board);

    return 0;
}

bool check_win(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return true;
        }
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

bool check_tie(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }

    return true;
}

void print_board(char board[3][3]) {
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}
