#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "makeargv.h"


const char* myPathSet(char*);
int main(){
    char** args;
    char *ps1 = getenv("PS1");
    //tokenized ps1
    char* prompt;
    char *buf = malloc(1024);
    
    
    
    printf("%s\n", ps1);
    
    if(ps1 == NULL){
         ps1 = "$";
    }
    else{
        int cc;
        for(cc = 0; cc < sizeof(ps1)-1; cc++){
            if(*(ps1 + cc)=='\\'){
                char current  = *(ps1 + cc + 1);
                char *buf = malloc(sizeof(1024));
                if(current == 'u'){
                    strcat(prompt, getenv("USER"));
                }
                else if(current == 'W'){
                    getcwd(buf, sizeof(buf));
                    strcat(prompt, buf);
                }
                else if(current == 'w'){
                    strcat(prompt, getenv("PWD"));
                }
                else if(current == 'h'){
                    gethostname(buf, 1024);
                    strtok(buf, ".");
                        strcat(prompt, buf);
                }
            }
        }
    }
    
}

const char* myPathSet(char* a){
    return "AFA";
}