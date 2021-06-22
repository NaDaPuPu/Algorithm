#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> triangle(n, vector<int>(n, 0));
    int count = 1;
    int x = 0, y = 0, mod = 0;

    for (int l = 0; l < n; l++)
    {   
        if (mod == 0)
        {
            for (int i = l; i < n; i++)
                triangle[y++][x] = count++;
            x++;
            y--;
            mod = 1;
            continue;
        }
        
        if (mod == 1)
        {
            for (int i = l; i < n; i++)
                triangle[y][x++] = count++;
            x -= 2;
            y--;
            mod = 2;
            continue;
        }
        
        if (mod == 2)
        {
            for (int i = l; i < n; i++)
                triangle[y--][x--] = count++;
            x++;
            y += 2;
            mod = 0;
            continue;
        }
    }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (triangle[i][j]) answer.push_back(triangle[i][j]);

    return answer;
}