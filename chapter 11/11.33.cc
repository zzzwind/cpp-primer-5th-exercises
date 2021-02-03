#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

map<string, string> buildMap(ifstream &map_file) {
  map<string, string> trans_map;
  string key, value;
  while (map_file >> key && getline(map_file, value)) {
    if (value.size() > 1)
      trans_map[key] = value.substr(1);
    else
      throw runtime_error("no role for" + key);
  }
  return trans_map;
}
const string &transform(const string &s, const map<string, string> &m) {
  auto map_it = m.find(s);
  if (map_it != m.cend()) {
    return map_it->second;
  } else {
    return s;
  }
}

void word_transform(ifstream &map_file, ifstream &input) {
  auto trans_map = buildMap(map_file);
  string line;
  while (getline(input, line)) {
    istringstream stream(line);
    string word;
    bool firstword = true;
    while (stream >> word) {
      if(firstword)
        firstword = false;
      else
        cout << " ";
      cout << transform(word, trans_map);
    }
    cout << endl;
  }
}

int main(int argc, char **argv) {
  ifstream in1(argv[1]);
  ifstream in2(argv[2]);
  if (in1 && in2) {
    word_transform(in1, in2);
  } else {
    cerr << "fail to open file" << endl;
  }
  return 0;
}
