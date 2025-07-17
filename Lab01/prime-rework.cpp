#include <iostream>
#include <vector>
using namespace std;

void possitionCount(int pages) {

    if (pages < 2) {
        cout << "ERROR!";
        return;
    }
    if (pages == 2){
        cout << "1st"; 
        return;
    }
    if (pages % 2 == 0){
        cout << "Unrelated";
        return;
    }

    vector<bool> storedPrime;

    for (int i = 3; i <= pages; i += 2){
        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                cout << "Unrelated";
                return;
            }
        }
        storedPrime.push_back(true);
        if (i == pages) {
            break;
        }
    }

    int possition_count = storedPrime.size() + 1;

    cout << possition_count;

    

    if (possition_count % 100 >= 11 && possition_count % 100 <= 13) {
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

    int pages;

    scanf("%d", &pages);
    
    possitionCount(pages);

    return 0;

}