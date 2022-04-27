#include <string>
using namespace std; 

string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
  int length = str.size();
  string sliced = str.erase(0,1);
  sliced = sliced.erase(length-2,1);
  return sliced ; 
}
