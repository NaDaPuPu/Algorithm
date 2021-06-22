#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> answer;
    vector<string> info_child(4);
    vector<string> query_child(4);

    for (int i = 0; i < query.size(); i++)
    {
        istringstream ss(query[i]);
        ss >> query_child[0] >> query_child[1] >> query_child[2] >> query_child[3];
        for (int j = 0; j < info.size(); j++)
        {
            istringstream ss2(query[i]);
            ss2 >> info_child[0] >> info_child[1] >> info_child[2] >> info_child[3];
        }
        
    }
    

    return answer;
}