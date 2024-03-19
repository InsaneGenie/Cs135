#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
  int num;
  int sum = 0;
  ifstream file ("numbers.txt");
  if (file.is_open())
  {
    while (file >> num)
    {
        sum = sum + num;
    }
    cout << sum << endl;
    file.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}