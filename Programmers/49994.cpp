#include <string>
using namespace std;

bool isEntered [11][11][11][11]; // 꼭 전역변수로 해야함 => 이유 모름
int solution(string dirs) {
    int answer = 0;
    int curX = 5, curY = 5;

    for (int i = 0; i < dirs.size(); i++)
    {
        int nextX = curX;
        int nextY = curY;
        if (dirs[i] == 'L')
        {
            nextX--;
        } else if (dirs[i] == 'R') {
            nextX++;
        } else if (dirs[i] == 'U') {
            nextY++;
        } else if (dirs[i] == 'D') {
            nextY--;
        }
        if (nextX < 0 || nextX > 10 || nextY < 0 || nextY > 10) continue;
        if (!isEntered[curX][curY][nextX][nextY])
        {
            isEntered[curX][curY][nextX][nextY] = true;
            isEntered[nextX][nextY][curX][curY] = true;
            answer++;
        }
        curX = nextX;
        curY = nextY;
    }
    
    return answer;
}