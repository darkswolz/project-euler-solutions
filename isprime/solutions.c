#include <stdio.h>

int main(){
    long long a=600851475143;
    long long i=2;
    while(a%i!=0){
        i++;
    }
    while(a%i>0){
        a=a/i;
    }
    printf("%lld",a);


    return 0;

}