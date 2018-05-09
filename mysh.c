#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "makeargv.h"


const char* myPathSet(char*);
int main(){
    char** args;
    char *ps1 = getenv("PS1");
    //tokenized ps1
    char** ps_tok;

    
    if(getenv("PS1") == NULL){
         ps1 = "$";
    }
    else{

    }
    
}

const char* myPathSet(char* a){
    return "AFA";
}