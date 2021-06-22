#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector <string> s_num;

    for (int i = 0; i < numbers.size(); i++) s_num.push_back(to_string(numbers[i]));

    sort(s_num.begin(), s_num.end(), compare);
    
    if (s_num[0] == "0") return s_num[0];
    
    for (int i = 0; i < numbers.size(); i++) answer += s_num[i];

    return answer;
}