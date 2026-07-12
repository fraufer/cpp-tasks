#include <iostream>
#include <set>
#include <vector>
#include <string>

std::set<char> singleWinners;
std::set<std::pair<char, char>> teamWinners;

void check_line(char a, char b, char c){
    std::set<char> line = {a, b, c};

    if(line.size() == 1){
        singleWinners.insert(a);
    } else if(line.size() == 2){
        // teamWinners.insert(*line.begin(), *std::next(line.begin()));

        auto it = line.begin();
        char first = *it;
        char second = *std::next(it);

        teamWinners.insert({first, second});
    }
}

int main(){
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<std::string> table(3);

    for(int i = 0; i < 3; ++i){
        std::cin >> table[i];
    }

    check_line(table[0][0], table[0][1], table[0][2]);
    check_line(table[1][0], table[1][1], table[1][2]);
    check_line(table[2][0], table[2][1], table[2][2]);

    check_line(table[0][0], table[1][0], table[2][0]);
    check_line(table[0][1], table[1][1], table[2][1]);
    check_line(table[0][2], table[1][2], table[2][2]);

    check_line(table[0][0], table[1][1], table[2][2]);
    check_line(table[0][2], table[1][1], table[2][0]);

    std::cout << singleWinners.size() << '\n';
    std::cout << teamWinners.size() << '\n';
}