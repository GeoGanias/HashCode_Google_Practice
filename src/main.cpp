#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(void) {
  ifstream infile("./input/b_small.in");
  int M,N;
  infile >> M >> N;

  int *arr = new int[N];
  int i;
  for(i=0;i<N;i++) {
    infile >> arr[i];
  }

  bool *b1 = new bool[N];
  int bestSum = 0;
  int sum = 0;
  bool *bestB = new bool[N];
  i = 0;

  for(i=0;i<pow(2.0,(double) N);i++) {
    int j;

    for(j=0;j<N;j++) {
      if(b1[j] == false) {
        sum += arr[j];
        b1[j] = true;
        break;
      }
      else {
        sum -= arr[j];
        b1[j] = false;
      }
    }
    if(sum == M) {
      bestSum = sum;
      break;
    }
    else if(sum > M) {
      continue;
    }
    if(bestSum < sum) {
      bestB = b1;
      bestSum = sum;
    }
  }

  cout << "score " << bestSum <<endl;
  for(i=0;i<N;i++) {
    if(bestB[i]) {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}
