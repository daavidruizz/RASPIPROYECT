#include <stdio.h>

int main(int arc, char* argv[]){
    char *ip = "192.168.1.19";
    int port = 7777;

    if(arc == 1){
        ip = argv[0];
    }
}
