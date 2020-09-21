#include <iostream>
#include <string>

#define BOARD_SIZE 3

void CreateBoard(std::string board[BOARD_SIZE][BOARD_SIZE]){
    for(int x = 0; x < BOARD_SIZE; ++x){
        for(int y = 0; y < BOARD_SIZE; ++y){
            board[x][y] = "-";
        }
    }
}


int main(){



    return 0;
}


