#include <cmath>
#include <iostream>

using namespace std;

int main() {  
    int tipPercent;
    int taxPercent;
    double mealCost;
    
     cin >> mealCost >> tipPercent >> taxPercent;
    
    double tip = mealCost * tipPercent / 100;
    double tax = mealCost * taxPercent / 100;
    int totalCost = round(mealCost + tip + tax);
    
    cout<< totalCost;
    
    return 0;
}
