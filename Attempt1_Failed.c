#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int case_ = 0, n=0;
    long const_ = 0, day = 0, i = 1, temp = 6, reward = 0;
    long M = 1000000007;
    scanf("%d", &case_);
    
    
    for(n =0; n < case_; n++){
        reward = 0; temp = 6;
        scanf("%ld%ld", &const_, &day);
        for( i = 0; i < day; i++){
            if(i == 0)
                reward = 1;
            else{
                reward = (reward + ((temp * i)+reward))%M;
            }
        }
        printf("%ld\n", const_ * reward);
    }
    return 0;
}
