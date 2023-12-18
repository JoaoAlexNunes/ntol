#include <stdio.h>

// Function prototypes
void initializeBoard(char board[3][3]);
void printBoard(char board[3][3]);
int makeMove(char board[3][3], int row, int col, char currentPlayer);
int checkWin(char board[3][3], char currentPlayer);
int isBoardFull(char board[3][3]);

int main()
{
  char board[3][3];
  int row, col;
  char currentPlayer = 'X';
  int moveResult;

  // Initialize the board
  initializeBoard(board);

  // Game loop
  do
  {
    // Print the current state of the board
    printBoard(board);

    // Get the player's move
    printf("Player %c, enter your move (row and column): ", currentPlayer);
    scanf("%d %d", &row, &col);

    // Make the move and check the result
    moveResult = makeMove(board, row, col, currentPlayer);

    if (moveResult == 1)
    {
      // Valid move, check for a win
      if (checkWin(board, currentPlayer))
      {
        printBoard(board);
        printf("Player %c wins!\n", currentPlayer);
        break;
      }

      // Check for a draw
      if (isBoardFull(board))
      {
        printBoard(board);
        printf("The game is a draw!\n");
        break;
      }

      // Switch to the other player
      currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    else
    {
      // Invalid move, ask for input again
      printf("Invalid move. Try again.\n");
    }

  } while (1);

  return 0;
}

// Function to initialize the Tic Tac Toe board
void initializeBoard(char board[3][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      board[i][j] = ' ';
    }
  }
}

// Function to print the Tic Tac Toe board
void printBoard(char board[3][3])
{
  int i, j;
  printf("\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" %c ", board[i][j]);
      if (j < 2)
        printf("|");
    }
    printf("\n");
    if (i < 2)
      printf("-----------\n");
  }
  printf("\n");
}

// Function to make a move on the Tic Tac Toe board
// Returns 1 if the move is valid, 0 otherwise
int makeMove(char board[3][3], int row, int col, char currentPlayer)
{
  if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
  {
    return 0; // Invalid move
  }

  board[row][col] = currentPlayer;
  return 1; // Valid move
}

// Function to check if a player has won
int checkWin(char board[3][3], char currentPlayer)
{
  // Check rows, columns, and diagonals
  for (int i = 0; i < 3; i++)
  {
    if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
        (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer))
    {
      return 1; // Win
    }
  }

  // Check diagonals
  if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
      (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer))
  {
    return 1; // Win
  }

  return 0; // No win
}

// Function to check if the board is full (a draw)
int isBoardFull(char board[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (board[i][j] == ' ')
      {
        return 0; // Board is not full
      }
    }
  }
  return 1; // Board is full
}