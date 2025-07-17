#include <iostream>
using namespace std;

void possitionCount(int pages) {
    
    int possition_count = 1;

    if (pages < 2) {
        cout << "ERROR!";
        return;
    }else if (pages == 2){
        cout << possition_count << "st";
        return;
    }

    

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

    int pages;

    scanf("%d", &pages);
    
    possitionCount(pages);

    return 0;

}