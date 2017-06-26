

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
        return reverse(input.begin(),input.end());
 }

 
int main() {
    ReverseStr s("Hello");
    ReverseStr newval = -s;
    cout << newval <<endl;
    return 0;
}
