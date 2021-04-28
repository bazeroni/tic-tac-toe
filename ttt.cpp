#include <iostream>
#include "ttt_functions.hpp"

int main() {
  
  int turn;
  std::string player = "x";
  std::vector<std::string> board = {"-", "-", "-", "-", "-", "-", "-", "-", "-"};
  
  introduction();

  while ((is_winner(board, player) == false) || (filled_up(board) == false)) {

    update_board(board);

    //take_turn(player, turn);
    std::cout << "Enter your move as '" << player << "' (0-8): ";
    std::cin >> turn;

    //set_position(board, turn, player);
    board[turn] = player;

    update_board(board);

    //change_player(player);
    if (player == "x") {
    player = "o";
    } else {
    player = "x";
    }

  }
  
  end_game();

}
