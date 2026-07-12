#include <iostream>
#include <vector>
#include <string>

int main(){
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n ,k;
    std::cin >> m >> n >> k;

    std::vector<std::string> signal(m);

    for(int i = 0; i < m; i++){
        std::cin >> signal[i];
    }

    std::vector<std::string> newSignal{};

    for(int i = 0; i < m; i++){
        std::string newSignalRow = "";

        for(int j = 0; j < n; j++){
            if(signal[i][j] == 'X'){
                newSignalRow.append(k, 'X');
            } else if(signal[i][j] == '.'){
                newSignalRow.append(k, '.');
            }
        }
        newSignal.insert(newSignal.end(), k, newSignalRow);
    }
    
    for(std::string row : newSignal){
        std::cout << row << '\n';
    }

    return 0;
}