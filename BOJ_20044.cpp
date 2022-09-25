#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <typeinfo>
using namespace std;
void solution(int N, int student[])
{
    int sM = 0;
    int current;
    sort(student, student + 2*N);
    sM = student[0] + student[2 * N - 1];
    cout << sM << "\n";
    for(int i = 0; i < 2*N; i++)
    {
        current = student[i] + student[2*N - 1 - i];        
        sM = (current < sM) ? current : sM;
    }
    cout << sM;
}
int main()
{
    int N = 0;
    cin >> N;
    int student[10000];
    for(int i = 0; i < 2*N; i++)
        cin >> student[i];

    solution(N, student);
    return 0;
}

