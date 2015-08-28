#include<stdio.h>

int main()
{
 int harryShort, totalCan, larryShort, larryMissed, harryMissed;
 scanf("%d %d", &harryShort, &larryShort);
 totalCan = (larryShort + harryShort) -1;
 harryMissed = totalCan - harryShort;
 larryMissed = totalCan - larryShort;
 printf("%d %d", harryMissed, larryMissed);
 return 0;
}
