#include <iostream>
using namespace std;

void findLowest(string arrNames[], int arrGrades[], int size){
  int lowest = 100;
  string lowestName;
  for(int i = 0; i < size; i++){
    if(arrGrades[i] < lowest){
      lowest = arrGrades[i];
      lowestName = arrNames[i];
    }
  }
  cout << "The worst student is " << lowestName << ", with a grade of " << lowest << endl;
}