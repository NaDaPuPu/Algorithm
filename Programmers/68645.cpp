#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> triangle(n, vector<int>(n, 0));
    int count = 1;
    int x = 0, y = 0;

    for (int l = n - 1; l >= 0; l -= 3)
    {
        if (l == 0)
        {
            triangle[y][x] = count;
            break;
        }
        
        for (int i = 0; i < l; i++)
        {
            triangle[y][x] = count++;
            y++;
        }
        
        if (triangle[y][x])
        {
            break;
        }
        

        for (int i = 0; i < l; i++)
        {
            triangle[y][x] = count++;
            x++;
        }
        
        if (triangle[y][x])
        {
            break;
        }

        for (int i = 0; i < l; i++)
        {
            triangle[y][x] = count++;
            x--;
            y--;
        }
        
        x++;
        y += 2;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (triangle[i][j])
            {
                answer.push_back(triangle[i][j]);
            }
        }
    }

    return answer;
}