#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h> /* close */
#include <netdb.h> /* gethostbyname */
#include <thread>
#include <string>
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(s) close(s)

typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;
typedef struct in_addr IN_ADDR;


void main2()
{
    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN sin = { 0 };

    sin.sin_addr.s_addr = htonl(INADDR_ANY); /* nous sommes un serveur, nous acceptons n'importe quelle adresse */

    sin.sin_family = AF_INET;

    sin.sin_port = htons(9012);

    if(bind (sock, (SOCKADDR *) &sin, sizeof sin) == SOCKET_ERROR)
    {
        printf("erreur \n");
    }

    if(listen(sock, 5) == SOCKET_ERROR)
    {
        printf("erreur listen \n");
    }

    SOCKADDR_IN csin = { 0 };
    SOCKET csock;

    int sinsize = sizeof csin;

    csock = accept(sock, (SOCKADDR *)&csin, &sinsize);

    if(csock == INVALID_SOCKET)
    {
   
    }

char buffer[1024];
char reponse[6] = {'c','o','u','c','o','u'};
int n = 0;
  
int i=0;

while(buffer[i] != '!')
{
    if((n = recv(csock, buffer, sizeof (buffer - 1), 0)) < 0)
    {
        printf("erreur reception \n");
    }

    i++;

    if(send(csock,reponse,6,0)<0)
    {
        printf("send \n");
    }

   
}

closesocket(csock); 

    
}

void main2()
{
SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN sin = { 0 };

    sin.sin_addr.s_addr = htonl(INADDR_ANY); /* nous sommes un serveur, nous acceptons n'importe quelle adresse */

    sin.sin_family = AF_INET;

    sin.sin_port = htons(9012);

    if(bind (sock, (SOCKADDR *) &sin, sizeof sin) == SOCKET_ERROR)
    {
        printf("erreur \n");
    }

    if(listen(sock, 5) == SOCKET_ERROR)
    {
        printf("erreur listen \n");
    }

    SOCKADDR_IN csin = { 0 };
    SOCKET csock;

    int sinsize = sizeof csin;

    csock = accept(sock, (SOCKADDR *)&csin, &sinsize);

    if(csock == INVALID_SOCKET)
    {
   
    }

char buffer[1024];
char reponse[6] = {'c','o','u','c','o','u'};
int n = 0;
  
int i=0;

while(buffer[i] != '!')
{
    if((n = recv(csock, buffer, sizeof (buffer - 1), 0)) < 0)
    {
        printf("erreur reception \n");
    }

    i++;

    if(send(csock,reponse,6,0)<0)
    {
        printf("send \n");
    }

   
}

closesocket(csock); 


    
}

void main3()
{
   SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN sin = { 0 };

    sin.sin_addr.s_addr = htonl(INADDR_ANY); /* nous sommes un serveur, nous acceptons n'importe quelle adresse */

    sin.sin_family = AF_INET;

    sin.sin_port = htons(9012);

    if(bind (sock, (SOCKADDR *) &sin, sizeof sin) == SOCKET_ERROR)
    {
        printf("erreur \n");
    }

    if(listen(sock, 5) == SOCKET_ERROR)
    {
        printf("erreur listen \n");
    }

    SOCKADDR_IN csin = { 0 };
    SOCKET csock;

    int sinsize = sizeof csin;

    csock = accept(sock, (SOCKADDR *)&csin, &sinsize);

    if(csock == INVALID_SOCKET)
    {
   
    }

char buffer[1024];
char reponse[6] = {'c','o','u','c','o','u'};
int n = 0;
  
int i=0;

while(buffer[i] != '!')
{
    if((n = recv(csock, buffer, sizeof (buffer - 1), 0)) < 0)
    {
        printf("erreur reception \n");
    }

    i++;

    if(send(csock,reponse,6,0)<0)
    {
        printf("send \n");
    }

   
}

closesocket(csock); 


    
}

void main4()
{
    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN sin = { 0 };

    sin.sin_addr.s_addr = htonl(INADDR_ANY); /* nous sommes un serveur, nous acceptons n'importe quelle adresse */

    sin.sin_family = AF_INET;

    sin.sin_port = htons(9012);

    if(bind (sock, (SOCKADDR *) &sin, sizeof sin) == SOCKET_ERROR)
    {
        printf("erreur \n");
    }

    if(listen(sock, 5) == SOCKET_ERROR)
    {
        printf("erreur listen \n");
    }

    SOCKADDR_IN csin = { 0 };
    SOCKET csock;

    int sinsize = sizeof csin;

    csock = accept(sock, (SOCKADDR *)&csin, &sinsize);

    if(csock == INVALID_SOCKET)
    {
   
    }

char buffer[1024];
char reponse[6] = {'c','o','u','c','o','u'};
int n = 0;
  
int i=0;

while(buffer[i] != '!')
{
    if((n = recv(csock, buffer, sizeof (buffer - 1), 0)) < 0)
    {
        printf("erreur reception \n");
    }

    i++;

    if(send(csock,reponse,6,0)<0)
    {
        printf("send \n");
    }

   
}

closesocket(csock); 


    
}

void main5()
{
     SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN sin = { 0 };

    sin.sin_addr.s_addr = htonl(INADDR_ANY); /* nous sommes un serveur, nous acceptons n'importe quelle adresse */

    sin.sin_family = AF_INET;

    sin.sin_port = htons(9012);

    if(bind (sock, (SOCKADDR *) &sin, sizeof sin) == SOCKET_ERROR)
    {
        printf("erreur \n");
    }

    if(listen(sock, 5) == SOCKET_ERROR)
    {
        printf("erreur listen \n");
    }

    SOCKADDR_IN csin = { 0 };
    SOCKET csock;

    int sinsize = sizeof csin;

    csock = accept(sock, (SOCKADDR *)&csin, &sinsize);

    if(csock == INVALID_SOCKET)
    {
   
    }

char buffer[1024];
char reponse[6] = {'c','o','u','c','o','u'};
int n = 0;
  
int i=0;

while(buffer[i] != '!')
{
    if((n = recv(csock, buffer, sizeof (buffer - 1), 0)) < 0)
    {
        printf("erreur reception \n");
    }

    i++;

    if(send(csock,reponse,6,0)<0)
    {
        printf("send \n");
    }

   
}

closesocket(csock); 


   
}

void main6()
{
    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    SOCKADDR_IN sin = { 0 };

    sin.sin_addr.s_addr = htonl(INADDR_ANY); /* nous sommes un serveur, nous acceptons n'importe quelle adresse */

    sin.sin_family = AF_INET;

    sin.sin_port = htons(9012);

    if(bind (sock, (SOCKADDR *) &sin, sizeof sin) == SOCKET_ERROR)
    {
        printf("erreur \n");
    }

    if(listen(sock, 5) == SOCKET_ERROR)
    {
        printf("erreur listen \n");
    }

    SOCKADDR_IN csin = { 0 };
    SOCKET csock;

    int sinsize = sizeof csin;

    csock = accept(sock, (SOCKADDR *)&csin, &sinsize);

    if(csock == INVALID_SOCKET)
    {
   
    }

char buffer[1024];
char reponse[6] = {'c','o','u','c','o','u'};
int n = 0;
  
int i=0;

while(buffer[i] != '!')
{
    if((n = recv(csock, buffer, sizeof (buffer - 1), 0)) < 0)
    {
        printf("erreur reception \n");
    }

    i++;

    if(send(csock,reponse,6,0)<0)
    {
        printf("send \n");
    }

   
}

closesocket(csock); 


  
}

int main()
{
    std::thread t(main2);
    std::thread t1(main3);
    std::thread t2(main4);
    std::thread t3(main5);
    std::thread t4(main6);

    t.join();
    t1.join();
    t2.join();
    t3.join();
    t4.join();

 


return 0;

}