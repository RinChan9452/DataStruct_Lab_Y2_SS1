#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int senpaiMagic(const vector<int>& kouhais, int target, int& loop) {
    int left = 0, right = (int)kouhais.size() - 1;
    loop = 0;

    while (left <= right) {
        loop++;
        int mid = left + (right - left) / 2;

        if (kouhais[mid] == target){
            return mid;
        }
        if (kouhais[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    return -1;
}

int main(){
    vector<int> kouhai;
    string nums;

    getline(cin, nums);
    stringstream ss(nums);
    int insert;
    
    while(ss >> insert){
        kouhai.push_back(insert);
    }

    int loop;
    int target;
    cin >> target;

    int check = senpaiMagic(kouhai, target, loop);
    if (check != -1){
        cout << "Present - " << loop;
    } else {
        cout << "Absent";
    }
}