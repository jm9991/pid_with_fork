#include <stdio.h>
#include <stdlib.h>
#include  <sys/types.h> 
/* This header file has the definition for pid_t type*/
int main(){
    pid_t pid;

    pid = getpid();

    for (int i=0; i<8; i++){
        fork();
        if(getpid() != pid) 
            {    
             break;
            }         
    }

    printf("%d\n",getpid());
return 0;

}
