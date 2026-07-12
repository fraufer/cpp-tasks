#include <iostream>
#include <vector>
#include <string>

int main(){
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    std::cin >> n;

    std::vector<int> shuffled(n);
    std::vector<std::string> currentIds(n);

    for(int i = 0; i < n; i++){
        std::cin >> shuffled[i];
        shuffled[i]--;
    }

    for(int i = 0; i < n; i++){
        std::cin >> currentIds[i];
    }

    for(int step = 0; step < 3; step++){
        std::vector<std::string> prevIds(n);
        for (int i = 0; i < n; i++){
            prevIds[i] = currentIds[shuffled[i]];
        }
        currentIds = prevIds;
    }

    for(int i = 0; i < n; i++){
        std::cout << currentIds[i] << '\n';
    }

    return 0;
}