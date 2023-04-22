#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
int num; pid_t pid;
    printf("Soy el principal %d\n", getpid());
    for (num = 0; num< 2; num++) { 
        
        pid = fork();
        
        if (pid!= 0) break;
        
        printf ("Soy el proceso de PID%d y mi padre tiene%d de PID.\n", getpid(), getppid());
        srandom(getpid());
        sleep (random()%3);
    }
    
if (pid!= 0) printf ("Fin del proceso de PID%d.\n", wait (NULL)); return 0;
}