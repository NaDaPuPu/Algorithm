#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, start = 0, end = people.size() - 1;
    sort(people.rbegin(), people.rend());

    while (start <= end)
    {
        if (people[start] + people[end] <= limit)
        {
            start++;
            end--;
        } else {
            start++;
        }
        answer++;
    }

    return answer;
}