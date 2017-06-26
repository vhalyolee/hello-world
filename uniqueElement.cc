// function template
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <class T>
vector<T> Unique (T a[], int length) {
vector<T> vec;
vec.reserve(length); // to avoid rellocation
vec.push_back(a[0]);
  for (int i=0;i<length;i++){
    if (a[i]!=a[i-1])
     vec.push_back(a[i]);
     } 
   return vec;
   }
 }
 

int main () {
 
 int[] data = {0,0,1,4,5,5,5,5,5,10,10,30}; // sorted
 
 if (0)
 {
 // if not sorted you have to sort first
 int[] data = {10,10,30,4,5,5,5,5,5,1,0,0};
 std::vector<int> vecInts(&data[0], &data[0]+12);
 std::sort(vecInts.begin(), vecInts.end());
 vector<int>::iterator iter;
 int count(0);
  for (iter=vecInts.begin(); iter != vecInts.end(); iter++){
  data[count] = *iter;
  count++;
 }
 
  vector<int> outputvec;
  
  outputvec = unique(data,12);
  cout << "The unique elements are " <<for(i=0;i<outputvec.size();i++) outputvec[i] << endl;
  return 0;
}
