%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%  Exercise C++ first duplicate number !!!
%
% Given an array a that contains only numbers in the range from 1 to a.length, find the first duplicate number for which 
% the second occurrence has the minimal index. In other words, if there are more than 1 duplicated numbers, return the number 
% for which the second occurrence has a smaller index than the second occurrence of the other number does. If there are no such 
% elements, return -1.

% Example

%    For a = [2, 3, 3, 1, 5, 2], the output should be
%    firstDuplicate(a) = 3.

%    There are 2 duplicates: numbers 2 and 3. The second occurrence of 3 has a smaller index than than second occurrence of 2 does,
%    so the answer is 3.

%    For a = [2, 4, 3, 5, 1], the output should be
%    firstDuplicate(a) = -1.

% Input/Output

%    [time limit] 500ms (cpp)

%    [input] array.integer a

%    Guaranteed constraints:
%    1 ≤ a.length ≤ 105,
%    1 ≤ a[i] ≤ a.length.

%    [output] integer

%    The element in a that occurs in the array more than once and has the minimal index for its second occurrence. 
%    If there are no such elements, return -1.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


#include <iostream>
#include <vector>
#include <algorithm> 
#include <math.h>

int firstDuplicate(std::vector<int> a) {
 
if (a.size()<1 || a.size()> 1.e5 ){
    std::cout << "Please check your input vector length" <<std::endl;
    exit(1);
}

int minA,maxA;
    minA = *std::min_element(a.begin(),a.end());
    maxA = *std::max_element(a.begin(),a.end());
    if (minA<0 || maxA > a.size()){
       std::cout << "Please check your input vector values" <<std::endl;
        exit(1);
    }
    
std:vector<int> index;
index.assign(a.size(),a.size()+10 );
        
    int i;
    
    for (i=0;i<a.size()-1;i++){
        for (int j=i+1;j<a.size();j++){
            if (a[i]==a[j]) {
                
                index.push_back(j);
                std::cout <<"the duplicate index is " <<j<<std::endl;
            }
        }
    }
    std::cout<< "the smallest val " << *std::min_element(index.begin(),index.end()) << std::endl;
    
    int minelement=*std::min_element(index.begin(),index.end());
    
    if (minelement!=a.size()+10 ){ 
        return a[*std::min_element(index.begin(),index.end())];
    }else {
        minelement =-1;
        return minelement;
    }
}
