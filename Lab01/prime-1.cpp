#include <iostream>
#include <stdio.h>
using namespace std;

void checkPrime(long long n) {
    
    int possition_count = 1;
    int count = 0;

    if (n < 2) {
        cout << "Unrelated";
        return;
    }
    
    for (long long a = 2; a <= n; a++){
        possition_count++;
    }
    
}

int main (){
    long long pages;

    cout << "Please enter your total book pages: ";
    scanf("%lld", pages);
    
    checkPrime(pages);

    return 0;

}