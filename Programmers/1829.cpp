#include <vector>

using namespace std;

vector<vector<int>> pic;
vector<pair<int, int>> direction;
int width, height;

int search(int x, int y, int count, int isVisited[][100]) {
    isVisited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int dirX = x + direction[i].first;
        int dirY = y + direction[i].second;

        if (dirX >= width || dirY >= height || dirX < 0 || dirY < 0) continue;
        
        if (pic[dirX][dirY] == pic[x][y] && isVisited[dirX][dirY] == false)
        {
            count = search(dirX, dirY, count + 1, isVisited);
        }
    }
    return count;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int isVisited[100][100] = {false, };
    vector<int> answer;
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    width = m;
    height = n;

    pic = picture;

    direction.push_back(make_pair(-1, 0));
    direction.push_back(make_pair(1, 0));
    direction.push_back(make_pair(0, -1));
    direction.push_back(make_pair(0, 1));
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isVisited[i][j] == false && picture[i][j] != 0)
            {
                number_of_area++;
                max_size_of_one_area = max(max_size_of_one_area, search(i, j, 1, isVisited));
            }
        }
        
    }

    answer.push_back(number_of_area);
    answer.push_back(max_size_of_one_area);
    return answer;
}