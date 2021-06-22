#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcs(int a, int b) {
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        answer = lcs(answer, arr[i]);
    }

    return answer;
}