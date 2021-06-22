#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for (int x = sum; x > 0; x--)
    {
        if (sum % x == 0)
        {
            int y = sum / x;
            if (2 * x + 2 * y - 4 == brown && (x - 2) * (y - 2) == yellow)
            {
                answer.push_back(x);
                answer.push_back(y);
                break;
            }
        }
    }
    
    return answer;
}