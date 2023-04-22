#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {

int num;
pid_t nuevo;

for (num= 0; num< 2; num++) {
    nuevo= fork();
    if (nuevo== 0)
        break;
    printf("Soy el padre %d\n", getpid());
}

nuevo= fork();

nuevo= fork();

//if (nuevo!= 0) printf ("Fin del proceso de PID%d.\n", wait (NULL)); 
printf("Soy el proceso %d y mi padre es %d\n", getpid(), getppid());
if (nuevo!= 0) printf ("Fin del proceso de PID%d.\n", wait (NULL)); 
}