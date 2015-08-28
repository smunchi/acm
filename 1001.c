#include<stdio.h>
#include<math.h>

int main()
{
  double a, c[128 * 1024], value;
  int i = 0, j;
  while(scanf("%lf", &a) != EOF) 
  {
    c[i] = sqrt(a);    
    i++;  
  }

  for(j = i-1; j>=0; j--) {
    printf("%0.4lf\n", c[j]);
  }
  return 0;
}