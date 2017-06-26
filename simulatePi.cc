#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <numeric>


template <class T>

T variance(vector<T> vec) {
  
 T sum_of_elems = std::accumulate(vec.begin(), vec.end(), 0);
    T mean = std::accumulate(begin, end(), 0.0) / vec.size();
    T sum_of_elements = 0;
    for(std::vector<T>::iterator it = vec.begin(); it != vec.end(); ++it)
      sum_of_elements += (*it-mean)*(*it-mean);
    }
    return sqrt(sum_of_elements / (vec.size()-1));
}



int main()
{
   // int numIter;
   
   //std::cout<<("Enter the number of iterations you wantto estimate pi: "<<std::endl;
   
   //cin>>numIter;
   

   /* initialize random numbers */
   srand(time(NULL));

    const int numIter[] = {1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8 ,1e9 ,1e10};
    for (int j = 0; j < (sizeof(numIter) / sizeof(numIter[0])); j ++) {
      int 2dcircleCount=0;
   vector<double> resultPi;
   
      for ( i=0; i<numIter[j]; i++) {
        double x = (double)rand()/RAND_MAX;
        double y = (double)rand()/RAND_MAX;
         if (x*x+y*y<=1.0) 2dcircleCount++;
       }
      cout.precision(10);
      cout << numIter << (char)10 << (char)10 << (double)2dcircleCount / numiter[j] * 4.0 << endl; 
      vector<double> resultPi;
      resultPi.push_back((double)2dcircleCount / numiter[j] * 4.0 );
     
    
    // Need to include boost library  
      // accumulator_set<double, stats<tag::variance> > acc;
     // for_each(resultPi.begin(), resultPi.end(), bind<void>(ref(acc), _1));
  //cout << mean(acc) << endl;
  //cout << sqrt(variance(acc)) << endl;

}
cout<<" The variance of Pi" << variance<double>(resultPi)<<endl;;
  return 0;
}

