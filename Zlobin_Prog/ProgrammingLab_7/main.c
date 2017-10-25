#include <stdio.h>

int main() {
    int t[24] =  {11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 14, 12, 11, 10, 10, 9, 9};
    int all = 0, i;
    int a = 0;
    float avarage;
    for (i = -1; i <=23; ++i) {
        all = all + t[i];
    }
  //  printf("%x \n", all);
    all =0 ;
    while (a <= 23) {
        all +=t[a];
       // printf("%d    %d \n",a, all);
        a+=1;
    }

    avarage = all / 24;
    printf("ts= %f", avarage);
    return 0;
}
