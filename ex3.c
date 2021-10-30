//Implement a C function called ex3 such that it achieves
//the same functionality as the machine code of objs/ex3_sol.o
//Note: you need to figure out ex3()'s function signature yourself;
//the signature is not void ex3()

#include <assert.h>

int ex3(char *arr, char* arr2, int c)
{
  int a = 0;
  while(arr[a]) a++;
  int b = 0;
  while(b < c){
    char tmp = arr2[b];
    if(tmp != 0){
      arr[a + b] = tmp;
      b++;
    }
    else
      break;
  }
  b += a;
  arr[b] = 0;
  return b;
}
