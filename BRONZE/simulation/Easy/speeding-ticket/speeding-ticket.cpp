#include <iostream>
#include <vector>

int main(){
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;

    std::cin >> n >> m;

    std::vector<int> nVector{};
    std::vector<int> mVector{};

    for(int i = 0; i < n; i++){
        int length;
        int maxSpeed;
        std::cin >> length >> maxSpeed;

        for(int j = 0; j < length; j++){
            nVector.push_back(maxSpeed);
        }
    }
    
    for(int i = 0; i < m; i++){
        int length;
        int maxSpeed;
        std::cin >> length >> maxSpeed;

        for(int j = 0; j < length; j++){
            mVector.push_back(maxSpeed);
        }
    }

    int speeding = 0;

    for(int i = 0; i < 100; i++){
        if(mVector[i] > nVector[i]){
            speeding = std::max(speeding, mVector[i] - nVector[i]);
        }
    }

    std::cout << speeding;
}