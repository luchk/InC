#include <stdio.h>

int main() {
    int a[100] = {5, 1, 6, 3, 43, 6, 23, 60, 2, 3, 43, 53, 765, 8, 6, 4, 34, 65, 645, 43, 34, 3465, 65, 877, 543, -1000};
    long int index, i, j, index2, sum =0;
    float avarage;
    for (i = 0; i < 100; ++i) {
        if(a[0]<=a[i]) {
            a[0] = a[i];
            index = i;
        }
    }
     printf("the biggest part in array = %d, index of that array %d \n", a[0], index);
    for(j = 0; j < 100; ++j){
        if (a[0] > a[j]){
            a[0] = a[j];
        }
    }
    printf("the smallest part in array = %d, index of that array %d \n", a[0], index);
    for(sum = 0; sum < ; ++sum){
        avarage += a[sum];
    }
    printf("The sum of the array = %f, avarage number in the array = %f", avarage, avarage/100);
    return 0;
}
