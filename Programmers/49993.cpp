#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;

    for (int i = 0; i < skill_trees.size(); i++)
    {
        int isChecked[26] = {0, };
        bool isFailed = false;
        for (int j = 0; j < skill_trees[i].size(); j++)
        {
            if (isFailed) break;
            for (int k = 0; k < skill.size(); k++)
            {
                if (isFailed) break;
                
                if (skill_trees[i][j] == skill[k])
                {
                    if (k == 0 || isChecked[k - 1] == 1)
                    {
                        isChecked[k]++;
                    } else {
                        isFailed = true;
                        break;
                    }
                }
            }
        }
        if (!isFailed) answer++;
    }
    
    return answer;
}