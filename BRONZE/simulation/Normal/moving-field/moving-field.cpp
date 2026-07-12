#include <iostream>
#include <vector>

struct Cell{
    int time;
    int x;
    int y;
};

int main(){
    int n;
    std::cin >> n;

    std::vector<Cell> cells;
    std::vector<int> currentCoords{0, 0};
    int x = 1e9;
    int currentTime = 0;
    for(int i = 0; i < n; ++i){
        char type;
        int time;
        std::cin >> type >> time;

        for(int j = 0; j < time; ++j){
            Cell cell;
            if(type == 'N'){
                currentCoords[1]++;
            } else if(type == 'E'){
                currentCoords[0]++;
            } else if(type == 'S'){
                currentCoords[1]--;
            } else if(type == 'W'){
                currentCoords[0]--;
            }

            currentTime++;

            cell.time = currentTime;
            cell.x = currentCoords[0];
            cell.y = currentCoords[1];

            cells.push_back(cell);

            for(Cell cellCheck : cells){
                if(cell.x == cellCheck.x && cell.y == cellCheck.y && cell.time != cellCheck.time){
                    x = std::min(x, cell.time - cellCheck.time);
                }    
            }
        }
    }

    if(x == 1e9){
        x = -1;
    }
    std::cout << x;
}