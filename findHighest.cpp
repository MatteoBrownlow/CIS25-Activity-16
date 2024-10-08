#include <iostream>
using namespace std;

void findHighest(string arrNames[], int arrGrades[], int size){
  int highest = 0;
  string highestName;
  for(int i = 0; i < size; i++){
    if(arrGrades[i] > highest){
      highest = arrGrades[i];
      highestName = arrNames[i];
    }
  }
  cout << "The best student is " << highestName << ", with a grade of " << highest << endl;
}