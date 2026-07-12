#include <iostream>
#include <cmath>

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    std::cin >> x >> y;

    int johnPosition = x;
    int johnTraveled = 0;
    int step = 1;

    while (johnPosition != y) {
        int next_target = x + step;

        while (johnPosition != next_target) {
            if (next_target > johnPosition) {
                johnPosition++;
            } else {
                johnPosition--;
            }
            johnTraveled++;

            if (johnPosition == y) {
                break;
            }
        }

        step *= -2; 
    }

    std::cout << johnTraveled << '\n';

    return 0;
}


