//
//  main.cpp
//  SummationOfPrimes
//
//  Created by Michael Wienands on 9/22/17.
//  Copyright © 2017 Michael Wienands. All rights reserved.
//https://github.com/mwienands/SummationOfPrimes.git
//
//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.
#include <iostream>


bool isPrime(int num) {
    if (num <= 3) {
        return num > 1;
    } else if (num % 2 == 0 || num % 3 == 0) {
        return false;
    } else {
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}

int main(int argc, const char * argv[]) {
    int_fast64_t sum = 0;
    for(int i = 2; i<2000000;i++){
        if(isPrime(i) == 1){
            sum = sum + i;
        }
    }
    std::cout << sum;
    return 0;
}
