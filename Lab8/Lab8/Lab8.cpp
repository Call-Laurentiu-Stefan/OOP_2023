#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <queue>
using namespace std;


class CompareT {
public:
    bool operator()(pair<string,int> fpair, pair<string,int>spair) {
        if (fpair.second == spair.second) {
            return fpair.first > spair.first;
        }
        return fpair.second < spair.second;
    }
};


int main()
{
    string s;
    ifstream file("Text.txt");
    getline(file, s);
    file.close();

    vector<string> words;
    auto start = s.find_first_not_of(" ,?!.");
    while (start != s.npos){
        auto end = s.find_first_of(" ,?!.", start);
        words.push_back(s.substr(start, end - start));
        start = s.find_first_not_of(" ,?!.", end);
    }

    map<string,int> m;
    for (auto i : words) {
        if(i[0]>='A'&&i[0]<='Z') {
            i[0] += 32;
        }
        m[i]++;
    }

    priority_queue<pair<string,int>, vector<pair<string,int>>, CompareT> pq;
    for (auto const& x : m) {
        pq.push(pair<string, int>{x.first,x.second});
    }
 
    while (pq.empty() == false) {
        cout << pq.top().first <<" => " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
