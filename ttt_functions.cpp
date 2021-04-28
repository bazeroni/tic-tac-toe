#include <iostream>
#include <vector>
#include <string>

bool is_winner(std::vector<std::string> board, std::string player) {
  if ((board[0] == player && board[1] == player && board[2] == player) || (board[3] == player && board[4] == player && board[5] == player) || (board[6] == player && board[7] == player && board[8] == player) || (board[0] == player && board[3] == player && board[6] == player) || (board[1] == player && board[4] == player && board[7] == player) || (board[2] == player && board[5] == player && board[8] == player) || (board[0] == player && board[4] == player && board[8] == player) || (board[6] == player && board[4] == player && board[2] == player)) {
    return true;
  } else {
    return false;
  }
}

bool filled_up(std::vector<std::string> board) {
  for (int i = 0; i < board.size(); i++) {
    if (board[i] == "-") {
      return false;
    }
    return true;
  }
}

void introduction() {
  std::cout << "Tic Tac Toe\n";
}

/*
void take_turn(std::string player, int turn) {
  std::cout << "Enter your move as '" << player << "' (0-8): ";
  std::cin >> turn;
}
*/

/*
void set_position(std::vector<std::string> board, int turn, std::string player) {
  board[turn] = player;
}
*/

void update_board(std::vector<std::string> board) {
  std::cout << board[0] << " " << board[1] << " " << board[2] << "\n";
  std::cout << board[3] << " " << board[4] << " " << board[5] << "\n";
  std::cout << board[6] << " " << board[7] << " " << board[8] << "\n";
}

/*
void change_player(std::string player) {
  if (player == "x") {
    player = "o";
  } else {
    player = "x";
  }
}
*/

void draw() {

}

void end_game() {
  std::cout << "Tic Tac Toe Done\n";
}
