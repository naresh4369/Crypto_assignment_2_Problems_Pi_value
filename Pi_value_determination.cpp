#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int seed;
   cout << "input a seed number: " << endl;
   cin >> seed;
   srand(seed);
   int i, a[100];
   for (i = 0; i < 100; i++)
      a[i] = rand() % 100 + 1;
      cout << "The generated random numbers are: " << endl;
   for (i = 0; i < 100; i++)
      cout << a[i] << "\t";
   int m, n, j, r;
   int  sum = 0;
   for (j = 0; j < 100; j+=2)
   {
      m = a[j];
      n = a[j + 1];
      j = j + 2;
      do
      {
          r = m%n;
          m = n;
          n = r;
      } while (r != 0);
        if (n = 1)
        sum = sum + 1;
   }
   double Pi, p;
   p = 300 / sum;
   Pi = sqrt(p);
   cout << "The estimate value of Pi is: " << Pi << endl;
   system("pause");
return 0;

}
