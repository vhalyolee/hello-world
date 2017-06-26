

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ReverseStr
{
    string oristr;
public:
    ReverseStr(string inputstr) { oristr=inputstr; }
    friend ReverseStr operator -(ReverseStr const );
 }
    
    // conversion operator that return reverse string
 ReverseStr   operator - (ReverseStr const &input)
 {
         return ReverseStr(reverse((input.oristr).begin(),(input.oristr).end()));
     
     
     // or we could so
    // string updatedstr=input.oristr;
    // int length = (input.oristr).length();
    // for (int i=0;i<length;i++){
    // updatedstr[length-i] = input.oristr[i];
    // }
    // return ReverseStr(updatedstr);
 }

 
int main() {
    ReverseStr s("Hello");
    ReverseStr newval = -s;
    cout << newval <<endl;
    return 0;
}
