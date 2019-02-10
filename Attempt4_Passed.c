#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int case_ = 0, n=0;
    long const_ = 0, day = 0, i = 1;
    long M = 1000000007;
    scanf("%d", &case_);
    
    
    for(n =0; n < case_; n++){
        
        scanf("%ld%ld", &const_, &day);
        printf("%ld\n", (const_ * day * day *day)%M);
    }
    return 0;
}
