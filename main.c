#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int i;
  int grade[5];
  int sum = 0;
  
  for (i=0; i<5;i++)
  {
      printf("grade[%i] = %i\n", i, *(grade+i));
      sum = sum + *(grade+i);
} 
  system("PAUSE");	
  return 0;
}
