#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define INVALID_SOCKET -1
#define SOCKET_ERROR -1

typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;

int main()
{
SOCKET sock;

sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

SOCKADDR_IN destAddrtcp;
destAddrtcp.sin_addr.s_addr = inet_addr("192.168.64.103");
destAddrtcp.sin_family = AF_INET;
destAddrtcp.sin_port = htons(9012);

connect(sock, (SOCKADDR*)&destAddrtcp, sizeof(destAddrtcp));

char buffer[7];

buffer[0] = 'g';
buffer[1]= 'r';
buffer[2] = 'o';
buffer[3] = 's';
buffer[4] = 'b';
buffer[5] = 'g';
buffer[6] = '\0';

send(sock,buffer,strlen(buffer),0);

close(sock);

return 0;

}
