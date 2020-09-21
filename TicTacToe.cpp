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

void DisplayBoard(std::string b[][BOARD_SIZE], int size){
    for(int y = 0; y < size; ++y){
        for(int x = 0; x < size; ++x){
            std::cout << b[x][y];
        }
        std::cout << std::endl;
    }
}


int main(){

    std::string board[BOARD_SIZE][BOARD_SIZE];
    CreateBoard(board);

    return 0;
}


