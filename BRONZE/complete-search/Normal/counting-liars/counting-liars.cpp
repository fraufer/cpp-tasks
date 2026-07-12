#include <iostream>
#include <vector>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<std::pair<char, int>> cows;

    for(int i = 0; i < n; ++i){
        std::pair<char, int> cow;
        std::cin >> cow.first >> cow.second;
        cows.push_back(cow);
    }

    int liars = 1e9;

    for(int i = 0; i < n; ++i){
        int forLiars = 0;

        for(int j = 0; j < n; ++j){
            if(cows[j].first == 'G' && cows[i].second < cows[j].second){
                forLiars++;
            } else(cows[j].first == 'L' && cows[i].second > cows[j].second){
                forLiars++
            }
        }

        liars = std::min(liars, forLiars);
    }

    std::cout << liars;
}