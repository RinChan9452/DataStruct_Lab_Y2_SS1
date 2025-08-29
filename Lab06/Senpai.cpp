#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int senpaiMagic(vector<int> &kou, int target, int& loop) {
    if (kou.empty()){
        return -1;
    }
    int left = 0;
    int right = (int)kou.size() - 1;
    loop = 0;

    while (left <= right) {
        ++loop;
        int mid = left + (right - left) / 2;

        if (kou[mid] == target){
            return mid;
        }
        if (kou[mid] < target){
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
    if (check > -1){
        cout << "Present - " << loop;
    } else {
        cout << "Absent";
    }

    return 0;
}