#include <iostream>
using namespace std;

bool checkPrime(long pages){
    
    for (long i = 2; i * i <= pages; i++){
        if(pages % i == 0){
            return false;
        }
    } //check if the pages is prime or not by using i^2 cuz if i is morethan half of prime it can't be divide by
      //prime for sure and check all the number before half of prime to know that if prime can be divide or not

    return true;

}

void possitionCount(long pages) {
    
    int possition_count = 0;

    if (pages < 2) {
        cout << "ERROR!";
    } // sorry I forgot to read question below that if it lower than 2 it will be error

    if (!checkPrime(pages)) {
        cout << "Unrelated";
        return;
    } // check if it prime or not first before find the possition

    for (long i = 2; i <= pages; i++) {
        if (checkPrime(i)){
            possition_count++;
        }
    } // check possition by loop number and check each number if it prime or not if yes possition count 
      // + 1 till the prime number that I want to find the possition

    if (possition_count == 0){
        return;
    }else if (possition_count % 100 >= 11 && possition_count % 100 <= 13) {
        cout << possition_count << "th";
    }else if((possition_count % 10) == 1){
        cout << possition_count << "st";
    }else if((possition_count % 10) == 2){
        cout << possition_count << "nd";
    }else if((possition_count % 10) == 3){
        cout << possition_count << "rd";
    }else{
        cout << possition_count << "th";
    }
    
}

int main (){

    long pages;

    scanf("%lld", &pages);
    
    possitionCount(pages);

    return 0;

}