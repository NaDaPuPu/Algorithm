#include <iostream>
using namespace std;

int jump_and_teleport(int n) {
    if (n == 0)
    {
        return n;
    }
    
    if(n % 2 == 0) {
        return jump_and_teleport(n / 2);
    } else {
        return jump_and_teleport(n - 1) + 1;
    }
}

int solution(int n)
{
    int answer = jump_and_teleport(n);
    return answer;
}