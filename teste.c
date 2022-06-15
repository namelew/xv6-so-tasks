//A Simple C program
#include "types.h"
#include "stat.h"
#include "user.h"
	
//passing command line arguments
	
int main(int argc, char *argv[])
{
    for(int j = 0; j < 2; j++)
    {
        int pid = fork(50);
        if (pid){
            for(int i = 0; i < 10; i++){
                printf(2, "%d - %d\n", pid, i);
            }
            exit();
        }
    }
    wait();
    exit();
}

// This code is contributed by sambhav228
