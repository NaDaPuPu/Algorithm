#include <string>
#include <vector>

using namespace std;

vector<int> answer;

void quadZip(int startX, int startY, int size, vector<vector<int>> &arr) {
    if (size < 1) return;
    
    int num = arr[startX][startY];
    for (int i = startX; i < startX + size; i++)
    {
        for (int j = startY; j < startY + size; j++)
        {
            if (arr[i][j] != num)
            {
                quadZip(startX, startY, size / 2, arr);
                quadZip(startX + size / 2, startY, size / 2, arr);
                quadZip(startX, startY + size / 2, size / 2,arr);
                quadZip(startX + size / 2, startY + size / 2, size / 2, arr);
                return;
            }
        }
    }
    answer[num]++;
}

vector<int> solution(vector<vector<int>> arr) {
    answer.push_back(0);
    answer.push_back(0);
    quadZip(0, 0, arr.size(), arr);
    return answer;
}