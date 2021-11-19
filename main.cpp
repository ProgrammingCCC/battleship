#include "logic.h"
int main() {
  bool **board = create_board(6, 6);
  destroy_board(board, 6);
}
