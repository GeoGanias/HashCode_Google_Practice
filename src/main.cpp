#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
  ifstream infile("./input/a_example.in");
  int M,N;
  infile >> M >> N;

  int *arr = new int[N];
  int i;
  for(i=0;i<N;i++) {
    infile >> arr[i];
  }

  bool *b1 = new bool[N];
  int bestB = new bool[N];
  int i = 0;
  while( ) {
    
  }

  return 0;
}
