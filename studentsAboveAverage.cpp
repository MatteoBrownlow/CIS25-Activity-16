#include <iostream>
using namespace std;

void studentsAboveAverage(string arrNames[], int arrGrades[], int size, int average){
  cout << "The following students have above average grades:" << endl;
  for(int i = 0; i < size; i++){
    if(arrGrades[i] > average){
      cout << arrNames[i] << endl;
    }
  }
}