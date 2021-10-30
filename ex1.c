//Implement a C function called ex1 such that it achieves 
//the same functionality as the machine code of objs/ex1_sol.o
//Note: you need to figure out ex1()'s function signature yourself; 
//the signature is not void ex1()
  
#include <assert.h>

char ex1(long a1, long a2, long a3) 
{
	a1 += a2;
	return (a1 == a3);
}
