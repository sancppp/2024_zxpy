#include <iostream>
#include <fstream>
using namespace std;

class Solution {
  string output1_path, output2_path;

 public:
  void Init_path(string output1_path, string output2_path) {
    this->output1_path = output1_path;
    this->output2_path = output2_path;
  }

  // 初始化init函数，从ifstream中读取数据,建图
  void Init_input(ifstream &file) {
    string line;
    // 遍历文件的每一行
    while (getline(file, line)) {
      cout << line << endl;
    }
  }

  void Output() {
    ofstream output1(output1_path, ios::out);
    output1 << "Hello World" << endl;

    ofstream output2(output2_path, ios::out);
    output2 << "Hello World" << endl;
  }
};

int main() {
  int case_id = 1;
  while (true) {
    string path = "./data/";
    string input_path = path + to_string(case_id) + "/input.csv";
    string output1_path = path + to_string(case_id) + "/output1.csv";
    string output2_path = path + to_string(case_id) + "/output2.csv";

    ifstream file(input_path, ios::in);
    if (!file) {
      break;
    }

    Solution solution = Solution();
    solution.Init_path(output1_path, output2_path);
    solution.Init_input(file);

    // TODO

    solution.Output();
    case_id++;
  }
  return 0;
}
