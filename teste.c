#include "types.h"
#include "stat.h"
#include "user.h"

#define N 9
#define SAMPLE 2147483647

int factorial(int n){
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

int np(int n, int p){
    return factorial(n)/(factorial(p)*factorial(n - p));
}

int main(int argc, char *argv[])
{
    int tickets[N] = {50, 50, 50, 400, 400, 400, 100, 100, 100};

    for(int j = 0; j < N; j++)
    {
        int pid = fork(tickets[j]);
        if (pid == 0){
            for(int i = 0; i < SAMPLE; i++){
                for(int k = 0; k < SAMPLE; k++){
                    int result = np(np(i, k), np(k, i));
                    result += result;
                }
            }
            printf(1, "%d\n", getpid());
            exit();
        }
    }
    for (int i = 0; i < N; i++){
        wait();
    }
    exit();
}