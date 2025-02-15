udp server - 
//server.cc

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>

#define PORT 12345

int main(){
    int serverSocket;
    struct sockaddr_in serverAddr , clientAddr;
    socklen_t clientLen = sizeof(clientAddr);
    
    //create socket
    serverSocket = socket(AF_INET , SOCK_DGRAM , 0);
    if (serverSocket == -1){
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }
    
    //setup server address
    memset(&serverAddr , 0 , sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADOR_ANY;
    serverAddr.sin_port = htons(SERVER_PORT);

    //Bind socket to address
    if(blind(serverSocket,(struct sockaddr*)&serverAddr , sizeof(serverAddr)) == -1){
        perror("Error binding");
        close(serverSocket);
        exit(EXIT_FAILURE);
    }

    //receive data from client
    recvfrom(serverSocket , &a , sizeof(a) , 0 , (struct sockaddr*)&clientAddr , clientLen);
    recvfrom(serverSocket , &b , sizeof(b) , 0 , (struct sockaddr*)&clientAddr , clientLen);

    int temp = a;
    a = b ;
    b = temp;
    
    //send modified value back to client
    sendto(serverSocket , &a , sizeof(a) , 0 , (struct sockaddr*)&clientAddr , clientLen);
    sendto(serverSocket , &b , sizeof(b) , 0 , (struct sockaddr*)&clientAddr , clientLen);
    
    printf("Swapped value: a = %d , b = %d\n" , a ,b );

    close(serverSocket);
    return 0;
    
    
    }

//client-

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>

#define SERVER_PORT 12345
#define SERVER_IP "127.0.0.1"

int main(){
    int clientSocket;
    struct sockaddr_in serverAddr;
    int a = 15 ,b = 20;

    // create socket
    clientSocket = socket(AF_INET , SOCK_DGRAM , 0);
    if (clientSocket == -1){
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    //set up server address
    memset(&serverAddr , 0 , sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr(SERVER_IP);
    serverAddr.sin_port = htons(SERVER_PORT);

    // server initial values to server
    sendto(clientSocket , &a , sizeof(a) , 0 , (struct sockaddr*)&serverAddr, sizeof(serverAddr));
    sendto(clientSocket , &b , sizeof(b) , 0 , (struct sockaddr*)&serverAddr, sizeof(serverAddr));

    // receive modified valuues from server
    recvfrom(clientSocket , &a , sizeof(a) , 0 , NULL , NULL);
    recvfrom(clientSocket , &b , sizeof(b) , 0 , NULL , NULL);

    printf("Received swapped values from server : a = %d , b = %d\n" , a,b);

    close(clientSocket);
    return 0;

}