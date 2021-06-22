using namespace std;

int Count(int n) {
    int cnt = 0;
    for (int i = 0; i < 21; i++)
    {
        if (n & 0x01 << i) cnt++;
        
    }
    return cnt;
}

int solution(int n) {
    int num = Count(n);
    while (Count(++n) != num);
    return n;
}