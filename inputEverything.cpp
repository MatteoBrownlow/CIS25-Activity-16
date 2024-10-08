#include <iostream>
using namespace std;

void inputEverything(string arrNames[], int arrGrades[], int size){
  for(int i = 0; i < size; i++){
    cout << "Enter a student's name: " << endl;
    cin >> arrNames[i];
    cout << "Enter their grade:" << endl;
    cin >> arrGrades[i];
  }
}