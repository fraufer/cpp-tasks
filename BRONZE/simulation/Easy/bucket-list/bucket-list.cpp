#include <iostream>
#include <vector>

int main() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int N;
    std::cin >> N;

	std::vector<int> timeline(1000);

    for(int i = 0; i < N; ++i){
        int start;
        int end;
        int buckets;
        std::cin >> start >> end >> buckets;

        for(int j = start; j <= end; ++j){
            timeline[j] += buckets;
        }
    }

    int bucketsNeed = 0;
    for(int i = 0; i < timeline.size(); ++i){
        if(timeline[i] > bucketsNeed){
            bucketsNeed = timeline[i];
        }
    }

    std::cout << bucketsNeed;
	return 0;
}