#include<iostream>
#include<ctime>
using namespace std;

void PrintN(int N){
    int i;
    for (i = 1; i <= N; i++){
        printf("%d\n", i);
    }
    return;
}
void PrintN_1(int N){
    if(N){
        PrintN_1(N-1);
        printf("%d\n", N);
    }
    return;
}

int main(){
    cout >> time(null);
    PrintN(100000);
    return 0;
}