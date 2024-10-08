#include <iostream>
using namespace std;

int findAverage(int arrGrades[], int size){
  int average = 0;
  for(int i = 0; i < size; i++){
    average += arrGrades[i];
  }
  average = average / size;
  cout << "The class average is " << average << "." << endl;
  return average;
}