#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

template <typename T>
vector<T> FindGreaterElements(const set<T>& elements, const T& border){
    vector<T> greatestElement;
    for(const auto& element : elements){
        if(element > border){
            greatestElement.push_back(element);
        }
    }
    sort(greatestElement.begin(), greatestElement.end());
    return greatestElement;
}


int main()
{
    for (int x : FindGreaterElements(set<int>{1, 5, 7, 8}, 5)) {
    cout << x << " ";
  }
  cout << endl;

  string to_find = "Python";
  cout << FindGreaterElements(set<string>{"C", "C++"}, to_find).size() << endl;
  return 0;
}
