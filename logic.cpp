#include "logic.h"
#include <cstdlib>

bool **create_board(const int height, const int width) {
  bool **board;
  *board = (bool *)malloc(sizeof(bool) * height);

  for (int i = 0; i < height; i++) {
    *board[i] = (bool *)malloc(sizeof(bool) * width);
  }

  return board;
}

void destroy_board(bool **board, const int height) {
  for (int i = 0; i < height; i++) {
    bool *arry = board[i];
    free(arry);
  }
  free(*board);
}

void place_ships(bool **board, const int shipcount, const int width,
                 const int height) {
  // TODO implement this function
}

void find_ships(bool **board, const int width, const int height) {
  // TODO implement
}

ResponseType guess(bool **board, const int x, const int y) {
  // TODO implement this
  return ResponseType::HIT;
}
