#include <iostream>
using namespace std;
#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("presuò kameò 1 z %d na %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 6 - a - b);
    print("presuò kameò %d z %d na %d\n", n, a, b);
    hanoi(n-1, 6 - a - b, b);
  }
}

int main()
{
   int N = 3;
 
    // A, B and C are names of rods
    hanoi(N, 1,2);
    return 0;
    // 1-A, 2-C, 3-B
}