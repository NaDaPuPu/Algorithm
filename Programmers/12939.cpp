#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    int max_num = -2147483648, min_num = 2147483647;
    istringstream iss(s);
    string number;

    while (getline(iss, number, ' '))
    {
        int num = stoi(number);
        if (num < min_num) min_num = num;
        if (num > max_num) max_num = num;
    }

    string answer = to_string(min_num) + " " + to_string(max_num);
    return answer;
}