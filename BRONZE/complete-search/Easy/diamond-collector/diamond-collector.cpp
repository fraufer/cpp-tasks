#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main(){
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> diamonds(n);
    for(int i = 0; i < n; ++i){
        std::cin >> diamonds[i];
    }
    std::sort(diamonds.begin(), diamonds.end());

    int maxDiamonds = 0;

    for(int i = 0; i < n; ++i){
        int totalDiamonds = 1;

        for(int j = i + 1; j < n; ++j){
            if(k >= diamonds[j] - diamonds[i]){
                totalDiamonds++;
            } else{
                break;
            }
        }

        if(totalDiamonds > maxDiamonds){
            maxDiamonds = totalDiamonds;
        }
    }

    std::cout << maxDiamonds;
}