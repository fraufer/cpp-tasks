#include <iostream>
#include <vector>
#include <cmath>

int main() {
    struct Point {
        int x;
        int y;
    };

    int N;
    std::cin >> N;

    std::vector<Point> points(N);

    for(int i = 0; i < N; ++i) {
        std::cin >> points[i].x;
    }

    for(int i = 0; i < N; ++i) {
        std::cin >> points[i].y;
    }

    int maxDistance = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j){
            int xDistance = points[i].x - points[j].x;
            int yDistance = points[i].y - points[j].y;
            int distance = xDistance * xDistance + yDistance * yDistance;
            if(distance > maxDistance){
                maxDistance = distance;
            }
        }
    }
    std::cout << maxDistance;
    return 0;
}