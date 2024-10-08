#include <iostream>
#include "./findAverage.hpp"
#include "./findHighest.hpp"
#include "./findLowest.hpp"
#include "./studentsAboveAverage.hpp"
#include "./inputEverything.hpp"
using namespace std;

int main(){
  int highestGrade, lowestGrade, average, howManyStudents = 0;
  cout << "How many students?" << endl;
  cin >> howManyStudents;
  int arrGrades[howManyStudents];
  string arrNames[howManyStudents];
  inputEverything(arrNames, arrGrades, howManyStudents);
  average = findAverage(arrGrades, howManyStudents);
  findHighest(arrNames, arrGrades, howManyStudents);
  findLowest(arrNames, arrGrades, howManyStudents);
  studentsAboveAverage(arrNames, arrGrades, howManyStudents, average);
  return 0;
}