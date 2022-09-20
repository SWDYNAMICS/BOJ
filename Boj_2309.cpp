#include <iostream>
#include <algorithm>
using namespace std;
void solution(int arr[]);
void printRes(int arr[], int fakeIdx[]);
int main() {
    int arr[9];
    for(int i =0; i < 9; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr+9);
    solution(arr);
    return 0;
}
void solution(int arr[])
{  
    int sum=0;
    int fakeIdx[2];
    for(int i =0; i < 9; i++) sum += arr[i];
    
    for(int i =0; i < 9; i++)
    {
      for(int j = i+1; j < 9; j++)
      {
        if(sum - (arr[i] + arr[j]) == 100)   
        {
          fakeIdx[0] = i;
          fakeIdx[1] = j;
          printRes(arr, fakeIdx);
          Exit(0);
        }
      }
    }
}

void printRes(int arr[], int fakeIdx[]){
  for(int i = 0; i < 9; i++)
  {
    if(i == fakeIdx[0] || i == fakeIdx[1])
      continue;
    cout << arr[i] << "\n";
  }
}