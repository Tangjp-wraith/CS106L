#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <sstream>
#include <tuple>
#include <vector>

using namespace std;

const int elemToFind = 5;

void printVec(const vector<int>& v);
pair<int, int> findPriceRange(int dist);
string GetLine();

int main() {
//   auto prices = make_pair(3.4, 5);
//   auto values = make_tuple(3, 4, "hi");
//   prices.first = prices.second;
//   get<0>(values) = get<1>(values);
//   auto [a, b] = prices;  // C++17
//   const auto& [x, y, z] = values;

//   int dist = 6452;
//   auto [minx, manx] = findPriceRange(dist);
//   cout << "You can find prices between: " << minx << " and " << manx << endl;

//   vector<int> vec{1, 2, 3, 4, 5, 6};  // uniform initialization
//   vector<int> vec1{3};                // vec1={3}
//   vector<int> vec2(3);                // vec2={0,0,0}

//   vector<int> vec(10);
//   std::generate(vec.begin(), vec.end(), rand);
//   std::sort(vec.begin(), vec.end());
//   std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, "\n"));

//   std::map<string, int> frequencyMap;
//   cout << "Enter words." << endl;
//   while (true) {
//     cout << ">";
//     string response = GetLine();
//     if (response.empty()) break;
//     std::istringstream stream(response);
//     string word;
//     while (stream >> word) {
//       ++frequencyMap[word];
//     }
//   }
//   cout << "Enter words to look up." << endl;
//   while (true) {
//     cout << ">";
//     string response = GetLine();
//     if (response.empty()) break;
//     if (frequencyMap.count(response)) {
//       cout << frequencyMap[response] << " entries found." << endl;
//     } else {
//       cout << "None." << endl;
//     }
//   }

//   set<int> container;
//   for (int i = 0; i < 10; i++) {
//     container.insert(i);
//   }
//   set<int>::iterator itr = container.begin();
//   while (itr != container.end()) {
//     cout << *itr << " ";
//     itr++;
//   }
//   cout << endl;
//   set<int>::iterator itr2;
//   for (itr2 = container.begin(); itr2 != container.end(); itr2++) {
//     cout << *itr2 << " ";
//   }
//   cout << endl;

//   std::multimap<int, int> myMap;  // no myMap[]
//   myMap.insert(make_pair(3, 3));
//   myMap.insert({3, 12});
//   cout << myMap.count(3) << endl;

//   vector<int> vec{3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
//   cout << "Before sort" << endl;
//   printVec(vec);
//   std::sort(vec.begin(), vec.end());
//   cout << "After sort" << endl;
//   printVec(vec);
//   cout << endl;
//   cout << "Let's try to find an element in our data structure..." << endl;
//   vector<int>::iterator it = std::find(vec.begin(), vec.end(), elemToFind);
//   if (it == vec.end()) {
//     cout << "Not found!" << endl;
//   } else {
//     cout << "Found elem: " << *it << endl;
//   }
//   cout << endl;

//   set<int> mySet{4, 1, 3, 5, 55, 5, 9, 22, 19, 28};
//   set<int>::iterator iter = mySet.lower_bound(4);
//   set<int>::iterator end = mySet.upper_bound(30);
//   while (iter != end) {
//     cout << *iter << " ";
//     ++iter;
//   }
//   cout << endl;
//   for (; iter != end; ++iter) {
//     cout << *iter << " ";
//   }
//   cout << endl;

  return 0;
}

pair<int, int> findPriceRange(int dist) {
  int minx = static_cast<int>(dist * 0.08 + 100);
  int maxn = static_cast<int>(dist * 0.36 + 750);
  return make_pair(minx, maxn);
}

string GetLine() {
  string response;
  std::getline(cin, response);
  return response;
}

void printVec(const vector<int>& v) {
  for (auto elem : v) {
    cout << elem << " ";
  }
  cout << endl;
}