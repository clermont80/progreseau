#include <iostream> 
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

using namespace std;

#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;

int main()
{
    SOCKET sock;
    sock = socket(AF_INET, SOCK_DGRAM, 0);
    SOCKADDR_IN InfoServer;

    InfoServer.sin_addr.s_addr = htonl(INADDR_ANY); 
    InfoServer.sin_family = AF_INET;
    InfoServer.sin_port = htons(9013);
    printf("Listage du port %d...\n", 9013);

    int error_message;
    error_message = ::bind(sock, (SOCKADDR*)&InfoServer, sizeof(InfoServer));
    
    char buffer[1500];
    memset (buffer,'\0',1500);
    sockaddr_in _from;
    socklen_t fromlen = sizeof(_from);

    bool condition = true;
do
{


    error_message = recvfrom(sock, buffer, 1500, 0,
    reinterpret_cast<sockaddr*>(&_from), &fromlen);
    
    if(buffer[0]!='q' && buffer[1] != 'u' && buffer[2] != 'i' && buffer[3] != 't')
    {
        condition =false;
    }
    
}while(condition==true);

close(sock);
    if(error_message<1)
    {

    }
    else
    {
        printf(" IP : %s ", inet_ntoa(_from.sin_addr));
        printf(" Port : %d ", ntohs(_from.sin_port));
        printf("Reçu : %s ", buffer);
    }

    return 0;

}