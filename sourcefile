#include <iostream>
#include <iomanip>
using namespace std;

int main(){


double weight;
double cost = 0.0;
double distance;
double i;

cin >> weight;
cin >> distance;

if (weight <= 0){
cout << "ILLEGAL WEIGHT: BELOW MINIMUM" << endl;
}

else if (weight > 20){
cout << "ILLEGAL WEIGHT: ABOVE MAXIMUM" << endl;
}

else if (distance < 10 || distance > 3000){
cout << "ILLEGAL DISTANCE" << endl;
}

else{
i = distance/500;
}

if (weight <= 2){
cost = i * 1.10;
}

else if (weight > 2 && weight <= 6){
cost = i * 2.20;
}

else if (weight > 6 && weight <=10){
cost = i * 3.70;
}

else if (weight > 10 && weight <= 20){
cost = i * 4.80;
}
cout << fixed << setprecision(2) << endl;

return 0;
}
