#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void checkPrime(long long n) {
    
    long long possition_count = 0;
    
    if (n < 2) {
        cout << "Unrelated";
        return;
    }
    
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0){
            cout << "Unrelated"; 
            return;
        }
    }

    for (long long i = 2; i <= n; i++) {
        if (i == n) {
            return count; 
        }  
    }

    possition_count++; 
    cout << possition_count;
    
}

int main (){
    long long pages;

    cout << "Please enter your total book pages: ";
    scanf("%lld", pages);
    
    checkPrime(pages);

    return 0;

}