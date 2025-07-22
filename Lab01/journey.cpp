#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int nutrient(int j){
    int P = pow(10, j);

    return P;
}

double uncleNutrient(){


    
}

double cowNutrient(){



}



int main (){

    int j, days, foods;
    double nutrientNeed;

    vector<int> foodEachDay;

    scanf("%d %f", &j, &nutrientNeed);

    scanf("%d", &days);

    for(int i = 0; i < days; i++){
        cin >> n;
        foodEachDay.push_back(n);
    }

    int alpha_promax_nutrient;

    alpha_promax_nutrient = nutrient(j);

    vector<int> nutrientEachDay;

    for(int i = 0; i < days; i++){
        nutrientEachDay.push_back(foodEachDay[i] * alpha_promax_nutrient);
    }

    
    

    cout << "Milk : " << normMilk << endl;
    cout << "ProMax Milk : " << proMilk << endl;
    

    return 0;

}
