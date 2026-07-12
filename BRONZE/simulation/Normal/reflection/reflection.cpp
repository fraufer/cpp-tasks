#include <iostream>
#include <vector>
#include <string>

int checkGroupCost(int r, int c, int n, const std::vector<std::string>& canvas){
    int r2 = n - 1 - r;
    int c2 = n - 1 - c;

    std::vector<std::pair<int, int>> group{{r, c}, {r2, c}, {r, c2}, {r2, c2}};

    int painted = 0;
    int unpainted = 0;

    for(auto &[xF, yF] : group){
        if(canvas[xF][yF] == '.'){
            unpainted++;
        } else{
            painted++;
        }
    }

    return std::min(painted, unpainted);
}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, u;
    std::cin >> n >> u;

    std::vector<std::string> canvas(n);
    for(int i = 0; i < n; ++i){
        std::cin >> canvas[i];
    }
    
    int changes = 0;

    for(int i = 0; i < n / 2; ++i){
        for(int j = 0; j < n / 2; ++j){
            changes += checkGroupCost(i , j, n, canvas);
        }
    }

    std::cout << changes << '\n';

    for(int i = 0; i < u; ++i){
        int x, y;
        std::cin >> x >> y;

        x--; y--;

        changes -= checkGroupCost(x, y, n, canvas);

        if(canvas[x][y] == '.'){
            canvas[x][y] = '#';
        } else{
            canvas[x][y] = '.';
        }

        changes += checkGroupCost(x, y, n, canvas);

        std::cout << changes << '\n';
    }
}