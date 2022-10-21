#include <iostream>
#include <tuple>
#include <vector>
#include<algorithm>
#include<iterator>
#include <deque>
#include <sstream>
#include <map>

using namespace std;

pair<int,int> findPriceRange(int dist); 

int main(){
    // auto prices = make_pair(3.4, 5);
    // auto values = make_tuple(3, 4, "hi");
    // prices.first = prices.second;
    // get<0>(values) = get<1>(values);
    // auto [a, b] = prices; // C++17
    // const auto& [x, y, z] = values;

    // int dist=6452;
    // auto [minx,manx]=findPriceRange(dist);
    // cout<<"You can find prices between: "
    //     <<minx<<" and "<<manx<<endl;

    // vector<int> vec{1,2,3,4,5,6}; // uniform initialization
    // vector<int> vec1{3}; // vec1={3}
    // vector<int> vec2(3); // vec2={0,0,0}

    // vector<int> vec(10);
    // std::generate(vec.begin(),vec.end(),rand);
    // std::sort(vec.begin(),vec.end());
    // std::copy(vec.begin(),vec.end(),std::ostream_iterator<int>(cout,"\n"));



    return 0;
}

pair<int,int> findPriceRange(int dist){
    int minx=static_cast<int>(dist*0.08+100);
    int maxn=static_cast<int>(dist*0.36+750);
    return make_pair(minx,maxn);
}