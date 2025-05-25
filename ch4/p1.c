#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int dig;
    printf("Enter 2 digit num: ");
    scanf("%3d", &dig);
    if (dig < 99){

        printf("The reversal of %d is %d%.0f\n", dig, (dig % 10), floor(dig / 10));
    } else if (dig > 99){
        printf("The reversal of %d is %d%.0f%.0f\n", dig, (dig % 10), floor((dig / 10) % 10), floor(dig / 10 / 10));
    }
    return 0;
}