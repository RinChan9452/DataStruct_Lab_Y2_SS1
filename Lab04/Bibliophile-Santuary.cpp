#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> book;
    string insertBook;

    while (cin >> insertBook) { 
        if (insertBook == "  ") break; 
        book.push_back(insertBook);
    }

    for (int i = 0; i < book.size(); i++) {
        cout << book[i] << endl;
    }

    return 0;
}


