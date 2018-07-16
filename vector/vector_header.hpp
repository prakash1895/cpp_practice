
#include <iostream>
#include <vector>

using namespace std;

  void printVector(vector<int> &vInts);
  void assignFunction(vector<int> &vInts, int NumofVec, int in);
  void pushBackFunction(vector<int> &vInts, int in);
  void emplaceFunction(vector<int> &vInts, int loc, int in);
  void insertFucntion(vector<int> &vInts, int loc, int in);
  void eraseFunction(vector<int> &vInts, int start, int end);
  void popBackFunction(vector<int> &vInts);
  void clearFunction(vector<int> &vInts);

 void printVector(vector<int> &vInts)
 {  
 	cout<<"\n Printing the Vectors \n";

     vector<int>::iterator it;
     for(it = vInts.begin(); it != vInts.end(); it++)
        cout<<*it<<"\t";
    cout<<"\n";
 }
 
  void assignFunction(vector<int> &vInts, int NumOfVec, int in)
  {
      cout<<"\n Assigning "<<NumOfVec<<" elements with value = "<<in;
     
      vInts.assign(NumOfVec,in);
      printVector(vInts);
  }

  void pushBackFunction(vector<int> &vInts, int in)
  {
      cout<<"\n Push back "<<in;
     
      vInts.push_back(in);
      printVector(vInts);
  }

  void emplaceFunction(vector<int> &vInts,  int loc, int in)
  {
      vector<int>::iterator it;
      cout<<"\n Emplacing "<<in<<" at the location="<<loc+1;
    
      it = vInts.begin()+loc;
      vInts.emplace(it, in);
      printVector(vInts);
  }

void insertFunction(vector<int> &vInts,  int loc, int in)
  {
      vector<int>::iterator it;
      cout<<"\n Inserting "<<in<<"at the location="<<loc+1;
    
      it = vInts.begin()+loc;
      vInts.insert(it, in);
      printVector(vInts);
  }

 void eraseFunction(vector<int> &vInts, int start, int end)
 {
 	 vector<int>::iterator it;
     cout<<"\n Erasing from "<<start<<"position to "<<end;

     it = vInts.begin();
     vInts.erase(it+start, it+end);
     printVector(vInts);

 }

  void popBackFunction(vector<int> &vInts)
  {
  	cout<<"\n Poping the last element. NOTE: pop_back doesn't return anything \n";
  	vInts.pop_back();
  	printVector(vInts);
  }

  void clearFunction(vector<int> &vInts)
  {
  	cout<<"\n Clear the entire Vector \n";
  	vInts.clear();
  	printVector(vInts);
  }