#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";

    int idx = 0, maxidx = 0;
    char max = NULL;

    for (int i = 0; i < number.size() - k; i++)
    {
        max = number[idx];
        maxidx = idx;
        for (int j = idx; j <= i + k; j++)
        {
            if (max < number[j])
            {
                max = number[j];
                maxidx = j;
            }
        }
        idx = maxidx + 1;
        answer += max;
    }
    
    return answer;
}