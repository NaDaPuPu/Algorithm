#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int run_n, bin_n;

string toBinary(string s) {
    int l = s.length();
    string binary_s = "";
    while (true)
    {
        binary_s = to_string(l % 2) + binary_s;
        l /= 2;
        if (l <= 1) {
            if (l == 1) binary_s = to_string(l) + binary_s;
            break;
        }
    }
    return binary_s;
}

string delZero(string s) {
    int temp = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0') temp++;
    }
    bin_n += temp;
    string no_zero_s(s.length() - temp, '1');
    return no_zero_s;
}

vector<int> solution(string s) {
    run_n = 0, bin_n = 0;
    while (s != "1")    
    {
        s = delZero(s);
        s = toBinary(s);
        run_n++;
    }

    return {run_n, bin_n};
}