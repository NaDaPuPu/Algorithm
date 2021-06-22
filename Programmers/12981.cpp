#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;

    for (int i = 1; i < words.size(); i++)
    {
        if(words[i - 1].back() == words[i].front()) {
            for (int j = 0; j < i; j++)
            {
                if (words[i] == words[j])
                {
                    answer.push_back(i % n + 1);
                    answer.push_back(i / n + 1);
                    break;
                }
            }
        } else {
            answer.push_back(i % n + 1);
            answer.push_back(i / n + 1);
            break;
        }

        if (answer.size() > 0)
        {
            break;
        }
    }

    if (answer.size() == 0)
    {
        answer.push_back(0);
        answer.push_back(0);
    }
    

    return answer;
}