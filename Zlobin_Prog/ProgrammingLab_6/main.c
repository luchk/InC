#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float x, y;
    FILE *myfile;
    myfile = fopen("/ProgrammingLab6/myfile.txt", "wt");
    x = 0;

    while (x <= 5) {
        y = (pow(x,2)) / 4 + x - 1.2502;

        fprintf(myfile,"%f   %f \n", x,y);

        x += 0.000002;
    }
    return 0;
}
