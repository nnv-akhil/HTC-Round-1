#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n%400==0){
        printf("Leap year");
    }
    else if((n%4==0)&&(n%100!=0)){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}
