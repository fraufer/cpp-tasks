#include <iostream>
#include <vector>

int main(){
    int N;
    std::cin >> N;

    std::vector<int> flowers(N);
    for(int i = 0; i < N; ++i){
        std::cin >> flowers[i];
    }

    int averageFlowerCount = 0;

    for(int i = 0; i < N; ++i){
        for(int j = i; j < N; ++j){
            int petals = 0;
            int flowersCount = j - i + 1;
            int averagePetal = 0;

            for(int flower = i; flower <= j; ++flower){
                petals += flowers[flower];
            }
            
            if(petals % flowersCount == 0){
                averagePetal = petals / flowersCount;
            }

            for(int flower = i; flower <= j; ++flower){
                if(averagePetal == flowers[flower]){
                    averageFlowerCount++;
                    break;
                }
            }

        }
    }
    std::cout << averageFlowerCount;
}