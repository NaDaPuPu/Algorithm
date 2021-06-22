#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    for (int i = citations.size() - 1; i >= 0 ; i--)
    {
        int count = 0;
        int h = i + 1;
        for (int j = 0; j < citations.size(); j++)
        {
            if (citations[j] >= h)
            {
                count++;
            }
        }
        
        if (h <= count)
        {
            answer = h;
            break;
        }
    }
    

    return answer;
}