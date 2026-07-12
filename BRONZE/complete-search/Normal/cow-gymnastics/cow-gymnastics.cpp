#include <iostream>
#include <vector>

int index(const std::vector<int> &vec, int a){
    for(int i = 0; i < vec.size(); ++i){
        if(vec[i] == a) return i;
    }

    return -1;
}

int main(){
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    std::vector<std::vector<int>> cows(n, std::vector<int>(k));

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < k; ++j){
            std::cin >> cows[i][j];
        }
    }

    int consistentPairs = 0;

    for(int first = 1; first <= k; ++first){
        for(int second = first + 1; second <= k; ++second){
            if(first == second) continue;

            std::pair<int, int> pair{first, second};
            int counter = 0;

            for(int i = 0; i < n; ++i){
                int firstIndex = index(cows[i], first);
                int secondIndex =  index(cows[i], second);

                if(firstIndex < secondIndex){
                    counter++;
                }
            }

            if(counter == 0 || counter == n){
                consistentPairs++;
            }
        }
    }

    std::cout << consistentPairs;
}