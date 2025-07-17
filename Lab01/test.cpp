#include <iostream>
#include <vector>
using namespace std;

void positionCount(int pages) {
    if (pages < 2) {
        cout << "ERROR!";
        return;
    }
    if (pages == 2) {
        cout << "1st";
        return;
    }
    if (pages % 2 == 0) {
        cout << "Unrelated";
        return;
    }

    vector<bool> storedPrime;
    storedPrime.push_back(true); // for 2

    // Check and count primes from 3 to pages
    for (int i = 3; i <= pages; i += 2) {
        bool isPrime = true;

        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            storedPrime.push_back(true);
            if (i == pages) {
                break; // page is prime
            }
        }

        if (i == pages) {
            // page is not prime
            cout << "Unrelated";
            return;
        }
    }

    int position = storedPrime.size();

    // Proper suffix
    if (position % 100 >= 11 && position % 100 <= 13) {
        cout << position << "th";
    } else if (position % 10 == 1) {
        cout << position << "st";
    } else if (position % 10 == 2) {
        cout << position << "nd";
    } else if (position % 10 == 3) {
        cout << position << "rd";
    } else {
        cout << position << "th";
    }
}

int main() {
    int pages;
    cin >> pages;
    positionCount(pages);
    return 0;
}