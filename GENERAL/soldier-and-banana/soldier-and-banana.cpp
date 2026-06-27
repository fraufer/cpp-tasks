// CHECKED

#include <iostream>

int main(){
    int k , n , w;
    std::cin >> k >> n >> w;

    int costOfBanana{(w * (w + 1) / 2) * k};
    
    if(costOfBanana > n){
        std::cout << costOfBanana - n;
    } else{
        std::cout << 0;
    }

    return 0;
}