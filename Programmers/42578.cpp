#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> kinds;

    for (int i = 0; i < clothes.size(); i++)
    {
        kinds[clothes[i][1]]++;
    }

    for (auto &k : kinds)
    {
        answer *= (k.second + 1);
    }

    return answer - 1;
}