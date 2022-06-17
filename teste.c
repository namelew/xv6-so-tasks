//A Simple C program
#include "types.h"
#include "stat.h"
#include "user.h"

#define N 9
//passing command line arguments
	
int main(int argc, char *argv[])
{
    int tickets[N] = {50, 400, 100, 200, 400, 50, 200, 100, 50};
    
    for(int j = 0; j < N; j++)
    {
        printf(1, "\nPai\n");
        int pid = fork(tickets[j]);
        if (pid){
            for(int i = 0; i < 100; i++){
                printf(1, "%d: %d\n", pid, i);
            }
            exit();
        }
    }
    wait();
    exit();
}

// This code is contributed by sambhav228
