#include <iostream>
using namespace std;

int main () 
{
  for (int x=2; x<100; x++)
  {
    bool prime=true;
    for (int y=2; y*y<=x; y++)
    {
      if (x % y == 0)
      {
        prime=false;
      }
    }
    if (prime) cout << x << endl;
  }
  return 0;
}
