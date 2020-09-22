#include <iostream>
#include <string>

#define BOARD_SIZE 3

struct Point{
    int x, y;
};


void CreateBoard(std::string board[BOARD_SIZE][BOARD_SIZE]){
    for(int x = 0; x < BOARD_SIZE; ++x){
        for(int y = 0; y < BOARD_SIZE; ++y){
            board[x][y] = "-";
        }
    }
}



void DisplayBoard(std::string board[BOARD_SIZE][BOARD_SIZE]){
    for(int y = 0; y < BOARD_SIZE; ++y){
        for(int x = 0; x < BOARD_SIZE; ++x){
            std::cout << board[x][y];
        }
        std::cout << std::endl;
    }
}


Point GetPlayerChoice(){
    bool hasInput = false;
    while(!hasInput){
        //get x coord
        std::cout << "X position for marker: ";
        std::string input;
        std::cin >> input;
        int x = std::stoi(input);

        //get y coord
        std::cout << "Y position for marker: ";
        std::cin >> input;
        int y = std::stoi(input);

        std::cout << std::endl;

        if(x < 0 || y < 0 || x >= BOARD_SIZE || y >= BOARD_SIZE){
            std::cout << "Not a valid location" << std::endl;
        }
        else{
            hasInput = true;
            return (Point){x, y};
        }

        
    }
    return (Point){-1, -1};
}
    

void PlaceMarker(std::string board[BOARD_SIZE][BOARD_SIZE], int x, int y, std::string marker){
    if(x < 0 || y < 0 || x >= BOARD_SIZE || y >= BOARD_SIZE ){
        std::cout << "Not a valid location" << std::endl;
        return;
    }
    board[x][y] = marker;
}


int main(){

    std::string board[BOARD_SIZE][BOARD_SIZE];
    CreateBoard(board);

    return 0;
}


