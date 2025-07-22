#include <iostream>
#include <vector>
using namespace std;

void possitionCount(int pages) {
    if (pages < 2) {
        cout << "ERROR!";
        return;
    }
    
    vector<bool> checkPrime(pages + 1, true);
    checkPrime[0] = checkPrime[1] = false;

    for (int j = 4; j <= pages; j += 2){
        checkPrime[j] = false;
    }
        
    for (int i = 3; i * i <= pages; i += 2) {
        if (checkPrime[i]) {
            for (int k = i * i; k <= pages; k += i) {
                checkPrime[k] = false;
            }
        }
    }

    if (!checkPrime[pages]) {
        cout << "Unrelated";
        return;
    }

    int possition = 1;
    for (int i = 2; i < pages; ++i) {
        if (checkPrime[i]) {
            possition++;
        }
    }

    if (possition % 100 >= 11 && possition % 100 <= 13){
        cout << possition << "th";
    }else if (possition % 10 == 1){
        cout << possition << "st";
    }else if (possition % 10 == 2){
        cout << possition << "nd";
    }else if (possition % 10 == 3){
        cout << possition << "rd";
    }else{
        cout << possition << "th";
    }
        
}

int main (){

    int pages;

    scanf("%d", &pages);
    
    possitionCount(pages);

    return 0;

}