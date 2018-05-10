#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "makeargv.h"


const char* myPathSet(char*);
int main(){
    char** args;
    char *ps1 = malloc(sizeof(getenv("PS1")));
    ps1 = getenv("PS1");
    //tokenized ps1
    char* prompt = malloc(1024);
    char *buf = malloc(1024);
    
    
    
    printf("%s\n", ps1);
    
    if(ps1 == NULL){
         ps1 = "$";
    }
    else{
        int cc;
        char buf[1024]; // to be used as a defualt character array buffer
        char current; //used to house the current character value to be parsec

        for(cc = 0; cc < sizeof(ps1)-1; cc++){
            printf("%c\n", *(ps1+cc));
            if(*(ps1 + cc)=='\\'){
                current  = *(ps1 + cc + 1);
                
                if(current == 'u'){
                    strcat(prompt, getenv("USER"));
                }
                else if(current == 'W'){
                    getcwd(buf, sizeof(buf));
                    char* last = strrchr(buf, '/');
                    strcat(prompt, last+1);
                    printf("%s\n", buf);
                    
                }
                else if(current == 'w'){
                    strcat(prompt, getenv("PWD"));
                }
                else if(current == 'h'){
                    gethostname(buf, 1024);
                    strtok(buf, ".");
                    strcat(prompt, buf);
                    
                }
                else if(current == 'n'){
                    strcat(prompt, "\n");
                }
                cc++;
            }
            else{
                strncat(prompt, &ps1[cc], 1 );
            }
            printf("%s\n", prompt);
        }
        
    }
    
}

const char* myPathSet(char* a){
    return "AFA";
}