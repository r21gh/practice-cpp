#include <iostream>

using namespace std;

double getAverage(int *arr, int size);

int main(){
  int balance[5] = {1000, 2, 3, 17, 50};
  double avg;
  
  avg = getAverage(balance, (sizeof(balance)/sizeof(*balance)));
  cout << "Average value is: " << avg << endl; 
    
  return 0;
}

double getAverage(int *arr, int size){
  double sum=0;
  double avg;
  for (int i=0; i<size; i++){
    sum += arr[i];
  }
  avg = double(sum)/size;
  return avg;
}
		   
