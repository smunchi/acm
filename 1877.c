#include<stdio.h>

int main() {
    int firstNight, secondNight;

    scanf("%d", &firstNight);
    scanf("%d", &secondNight);

    if(firstNight%2==0 || secondNight%2==1) {
      printf("yes");
    } else {
      printf("no");
    }

    return 0;
}

