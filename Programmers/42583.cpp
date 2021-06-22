#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, sum = 0, idx = 0;
    queue<int> bridge;
    
    while (true)
    {
        if (idx == truck_weights.size()) // 트럭이 다 건넜을 때
        {
            answer += bridge_length;
            break;
        }

        answer++;

        if (bridge.size() == bridge_length) // 다리 위에 트럭이 꽉 찼을 때
        {
            sum -= bridge.front();
            bridge.pop();
        }
        
        if (sum + truck_weights[idx] <= weight) // 이번 트럭이 올라갈 수 있을 때
        {
            sum += truck_weights[idx];
            bridge.push(truck_weights[idx]);
            idx++;
        } else {
            bridge.push(0);
        }
    }

    return answer;
}