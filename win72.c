#include <bits/stdc++.h> 
using namespace std; 
int closestNumber(int n, int m)
{    
    int q = n / m;        
    int n1 = m * q;   
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1)); 
    if (abs(n - n1) < abs(n - n2))
        return n1;
         return n2;    
}
int main()

{
   int n = 13, m = 4;
   cout << closestNumber(n, m) << endl;
   n = -15; m = 6;
    cout << closestNumber(n, m) << endl;
     n = 0; m = 8;
    cout << closestNumber(n, m) << endl;   
    n = 18; m = -7;
    cout << closestNumber(n, m) << endl;
      return 0;
} 
