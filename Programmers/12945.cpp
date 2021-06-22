#include <string>

using namespace std;

int fibo[100001] = {0};

int solution(int n) {
    if (n <= 1)
    {
        fibo[n] = n;
        return fibo[n];
    } else if(fibo[n] != 0) {
        return fibo[n];
    } else {
        fibo[n] = (solution(n - 1) + solution(n - 2)) % 1234567;
        return fibo[n]; 
    }
}