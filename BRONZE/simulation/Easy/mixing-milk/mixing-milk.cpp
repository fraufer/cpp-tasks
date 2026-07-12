#include <iostream>

int main(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    struct bucket
    {
        int maxVolume;
        int currentVolume;
    };

    bucket buckets[3];

    for(int i = 0; i < 3; i++){
        std::cin >> buckets[i].maxVolume >> buckets[i].currentVolume;
    }

    // std::cout << "============================================ VALUES TEST \n";

    // std::cout << firstBucket.maxVolume << " " << firstBucket.currentVolume << '\n' ;
    // std::cout << secondBucket.maxVolume << " "  << secondBucket.currentVolume << '\n' ;
    // std::cout << thirdBucket.maxVolume << " "  << thirdBucket.currentVolume << '\n' ;

    

    int poured;

    for(int i = 0; i < 100; i++){
        int fromBucket = i % 3;
        int toBucket = (i + 1) % 3;

        poured = std::min(buckets[fromBucket].currentVolume, buckets[toBucket].maxVolume - buckets[toBucket].currentVolume);

        buckets[fromBucket].currentVolume -= poured;
        buckets[toBucket].currentVolume += poured;

        // if(buckets[toBucket].maxVolume >= buckets[fromBucket].currentVolume + buckets[toBucket].currentVolume){
        //     buckets[toBucket].currentVolume += buckets[fromBucket].currentVolume;
        //     buckets[fromBucket].currentVolume = 0;
        // } else {
        //     poured = buckets[toBucket].maxVolume - buckets[toBucket].currentVolume;
        //     buckets[fromBucket].currentVolume -= poured;
        //     buckets[toBucket].currentVolume = buckets[toBucket].maxVolume;
        // }







        // if(currentBucket == 1){
        //     if(secondBucket.maxVolume >= firstBucket.currentVolume + secondBucket.currentVolume){
        //         secondBucket.currentVolume += firstBucket.currentVolume;
        //         firstBucket.currentVolume = 0;
        //     } else {
        //         poured = secondBucket.maxVolume - secondBucket.currentVolume;
        //         firstBucket.currentVolume -= poured;
        //         secondBucket.currentVolume = secondBucket.maxVolume;
        //     }
        // } else if(currentBucket == 2){
        //     if(thirdBucket.maxVolume >= secondBucket.currentVolume + thirdBucket.currentVolume){
        //         thirdBucket.currentVolume += secondBucket.currentVolume;
        //         secondBucket.currentVolume = 0;
        //     } else {
        //         poured = thirdBucket.maxVolume - thirdBucket.currentVolume;
        //         secondBucket.currentVolume -= poured;
        //         thirdBucket.currentVolume = thirdBucket.maxVolume;
        //     }            
        // } else {
        //     if(firstBucket.maxVolume >= thirdBucket.currentVolume + firstBucket.currentVolume){
        //         firstBucket.currentVolume += thirdBucket.currentVolume;
        //         thirdBucket.currentVolume = 0;
        //     } else {
        //         poured = firstBucket.maxVolume - firstBucket.currentVolume;
        //         thirdBucket.currentVolume -= poured;
        //         firstBucket.currentVolume = firstBucket.maxVolume;
        //     }  
        // }

        // std::cout << "==================== FOR CYCLE TEST NUMBER " << i << '\n';

        // std::cout << firstBucket.maxVolume << " " << firstBucket.currentVolume << '\n' ;
        // std::cout << secondBucket.maxVolume << " "  << secondBucket.currentVolume << '\n' ;
        // std::cout << thirdBucket.maxVolume << " "  << thirdBucket.currentVolume << '\n' ;
        // std::cout << currentBucket << '\n' ;
    }

    // std::cout << "=================================== RESULTS " << '\n';

    for(int i = 0; i < 3; i++){
        std::cout << buckets[i].currentVolume << '\n';
    }
}