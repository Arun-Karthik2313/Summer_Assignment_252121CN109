#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int original = num, remainder, total = 0, digits = 0;
    while (original != 0) {
        digits++;
        original /= 10;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        total += round(pow(remainder, digits));
        original /= 10;
    }
    return total == num;
}
