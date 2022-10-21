#include <unistd.h>

#include <chrono>
#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;

int StringToInteger(const string& str);
void printStateBits(const istream& iss);
void bufferedExperiment(ostream& oss);
void mindlessWork();
int endlEachTime();
int endlAtEnd();
void badWeclomeProgram();
int getInteger(const string& prompt);

int main() {
  // ostringstream oss("Ito-En Green Tea");
  // cout<<oss.str()<<endl;
  // oss<<"16.9";
  // cout<<oss.str()<<endl;

  // ostringstream oss("Ito-En Green Tea",ostringstream::ate);
  // cout<<oss.str()<<endl;
  // oss<<"16.9";
  // cout<<oss.str()<<endl;

  // istringstream iss("16.9 Ounces");
  // double amount;
  // string unit;
  // iss>>amount;
  // iss>>unit;
  // cout<<amount<<" "<<unit<<endl;

  // istringstream iss("16.9 Ounces");
  // int amount;
  // string unit;
  // iss>>amount;
  // iss>>unit;
  // cout<<amount/2<<" "<<unit<<endl;

  // string str = "132 1231";
  // cout<<StringToInteger(str)<<endl;

  // bufferedExperiment(cout);
  // bufferedExperiment(std::cerr);

  // int first = endlEachTime();
  // int second = endlAtEnd();
  // cout << "endl each time " << first << endl;
  // cout << "endl at end " << second << endl;

  // badWeclomeProgram();

  // cout << getInteger("please input integer: ") << endl;

  // istringstream iss("16.9\n 24");
  // double val;
  // string line;
  // iss >> val;          // val=16.9
  // // getline(iss, line);  // line=""
  // // getline(iss, line);  // line="24"

  // iss.ignore();        // ignore the first char
  // getline(iss, line);  // line="24"
  // cout << line << endl;

  return 0;
}


int StringToInteger(const string& str) {
  istringstream iss(str);
  // printStateBits(iss);

  int result;
  if (!(iss >> result)) throw std::domain_error("no value int at beginning!");

  char remain;
  if (iss >> remain) throw std::domain_error("more than a single valid int!");

  // printStateBits(iss);

  return result;
}

void printStateBits(const istream& iss) {
  cout << "State bits : ";

  cout << (iss.good() ? "G" : "-");
  cout << (iss.fail() ? "F" : "-");
  cout << (iss.eof() ? "E" : "-");
  cout << (iss.bad() ? "B" : "-");
  cout << "\n";
}

void bufferedExperiment(ostream& oss) {
  oss << "CS";
  mindlessWork();
  oss << "106";
  mindlessWork();
  oss << "L";
  mindlessWork();
  oss << endl;
}

void mindlessWork() { sleep(2); }

int endlEachTime() {
  auto startMove = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < 100; ++i) {
    cout << i << endl;
  }
  auto stopMove = std::chrono::high_resolution_clock::now();
  auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(
      stopMove - startMove);
  return moveDuration.count();
}

int endlAtEnd() {
  auto startMove = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < 100; ++i) {
    cout << i << '\n';
  }
  cout << std::flush;
  auto stopMove = std::chrono::high_resolution_clock::now();
  auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(
      stopMove - startMove);
  return moveDuration.count();
}

void badWeclomeProgram() {
  string name, response;
  int age;

  cout << "What is your name ?";
  // cin>>name;
  getline(cin, name);

  cout << "What is your age ?";
  cin >> age;

  cout << "Hello " << name << "(age " << age << ")" << '\n';

  cout << "Do you want to try again?";
  // cin>>response;
  getline(cin, response);

  cout << "You said : " << response << endl;
}

int getInteger(const string& prompt) {
  // cout << prompt;
  // string token;
  // cin >> token;
  // istringstream iss(token);
  // int result;
  // if (!(iss >> result)) throw std::domain_error("no value int at
  // beginning!"); char remain; if (iss >> remain) throw std::domain_error("more
  // than a single valid int!"); return result;

  while (true) {
    cout << prompt;
    string line;
    if (!getline(cin, line)) throw std::domain_error("error!");
    istringstream iss(line);
    int result;
    char trash;
    if (iss >> result && !(iss >> trash)) {
      return result;
    } else {
      throw std::domain_error("invalid!");
    }
  }
}