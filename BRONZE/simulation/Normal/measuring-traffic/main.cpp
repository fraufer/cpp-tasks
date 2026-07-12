#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

struct Segment {
    std::string type;
    int min;
    int max;
};

int main(){
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);


    int N;
    std::cin >> N;

    std::vector<Segment> road(N);
    for(int i = 0; i < N; ++i){
        std::cin >> road[i].type >> road[i].min >> road[i].max;
    }

    int low = 0, high = 1e9;

    for(int i = N - 1; i >= 0; --i){
        if(road[i].type == "none"){
            low = std::max(low, road[i].min);
            high = std::min(high, road[i].max);
        } 
        else if(road[i].type == "on"){
            low -= road[i].max;
            high -= road[i].min;
            low = std::max(0, low);
        } else if(road[i].type == "off"){
            low += road[i].min;
            high += road[i].max;
        }
    }
    
    std::cout << low << " " << high << '\n';

    low = 0; high = 1e9;

    for(int i = 0; i < N; ++i){
        if(road[i].type == "none"){
            low = std::max(low, road[i].min);
            high = std::min(high, road[i].max);
        } 
        else if(road[i].type == "on"){
            low += road[i].min;
            high += road[i].max;
        } else if(road[i].type == "off"){
            low -= road[i].max;
            high -= road[i].min;
            low = std::max(0, low);
        }
    }

    std::cout << low << " " << high;














    // struct Road {
    //     std::string type;
    //     int min;
    //     int max;
    // };

    // int N;
    // std::cin >> N;

    // std::vector<int> income(2);
    // std::vector<int> outcome(2);
    // std::vector<int> current(2);

    // for(int i = 0; i < N; ++i){
    //     std::string type;
    //     int min;
    //     int max;

    //     std::cin >> type >> min >> max;

    //     if(type == "on"){
    //         income[0] += min;
    //         income[1] += max;
    //     } else if (type == "off"){
    //         outcome[0] += min;
    //         outcome[1] += max;
    //     } else{
    //         current[0] = std::max(current[0], min);
    //         current[1] = std::min(current[1], max);
    //     }
    // }

    // std::sort(current.begin(), current.end());
    // std::sort(income.begin(), income.end());
    // std::sort(outcome.begin(), outcome.end());

    // std::vector<int> enter(2);
    // std::vector<int> leave(2);

    // enter[0] = current[0] - income[1];
    // enter[1] = current[1] - income[0];
    
    // leave[0] = current[0] - outcome[1];
    // leave[1] = current[1] - outcome[0];

    // for(int i = 0; i < 2; i++){
    //     std::cout << " " << enter[i] ;
    // }
    // std::cout << '\n';
    // for(int i = 0; i < 2; i++){
    //     std::cout << " " << leave[i] ;
    // }

    // return 0;
}