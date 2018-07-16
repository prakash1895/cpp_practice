#include "vector_header.hpp"

int main ()
{
  vector<int> vInts; 

  assignFunction(vInts,10, -7);
  pushBackFunction(vInts, 2);
  emplaceFunction(vInts, 1, 3);
  insertFunction(vInts, 3, -5);
  eraseFunction(vInts, 5, 8);
  popBackFunction(vInts);
  clearFunction(vInts);
  
  return 0;
}

