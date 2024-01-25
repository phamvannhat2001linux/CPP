// Using auto

#include <iostream>
#include <vector>

using namespace std;

int main()
{
 int temp{0};
 vector <int> arr{1 , 2 , 3 , 4};
 for (auto temp:arr)
 {
  cout << temp << "\t";
 }
 cout << "\n";

 return 0;
}

