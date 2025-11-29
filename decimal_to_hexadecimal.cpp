#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  int r;
  cin >> n;
  string hex;
  
  while (n > 0)
  {
      r = n%16;
      n = n/16;
      if(r<10)
      {
          hex = hex + char('0'+r);

      }else
      {
          hex = hex + char('A' + (r-10));
        
      }
  }
  
  for(int i = hex.length() - 1; i>=0; i--)
  {
      cout<<hex[i];
  }
  
}
