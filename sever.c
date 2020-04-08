
#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#include "sockets.h"

int main(){

message = " hello ";

int I = boot();
if(I == 0){
 message = "hello from client";
 READ();
 SEND();
}
if(I == 1){
message = "hello from server";
SEND();
READ();

}

return 0;

}