tcp server - 
//server.cc

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>

#define PORT 8080

int main(){
    int serverSocket , clientSocket;
    struct sockaddr_in serverAddr , clientAddr;
    socklen_t addrLen = sizeof(clientAddr);
    char str1[100] , str2[100];

    //Create socket
    serverSocket = socket(AF_INET , SOCK_STREAM , 0);
    if (serverSocket == -1){
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADOR_ANY;
    serverAddr.sin_port = htons(PORT);

    //Bind socket to address
    if(blind(serverSocket,(struct sockaddr*)&serverAddr , sizeof(serverAddr)) == -1){
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    // listen for connections
    listen(serverSocket , 3);
    printf("Server listening on port %d \n" , PORT);

    // Accept incoming connections
    clientSocket = accept(serverSocket,(struct sockaddr*)&clientAddr , &addrLen);
    if(clientSocket == -1){
        perror("Accept Failed");
        exit(EXIT_FAILURE);
    }

    //Receive strings from client
    read(clientSocket , str1 , sizeof(str1));
    read(clientSocket , str2 , sizeof(str2));

    //Compare string
    if(strcmp(str1,str2)==0){
        send(clientSocket , "Yes" , strlen("Yes") , 0);
    }
    else{
        send(clientSocket , "No" , strlen("No") , 0);
    }

    close(clientSocket);
    close(serverSocket);

    return 0 ;
}

Tcp client - 
//client.c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
//#include<arpa/inet.h>

#define PORT 8080

int main(){
    int clientSocket;
    struct sockaddr_in serverAddr ;
    char str1[] = "Hello";
    char str2[] = "World";

    //Create socket
    clientSocket = socket(AF_INET , SOCK_STREAM , 0);
    if (clientSocket == -1){
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddr.sin_port = htons(PORT);
    
    //Connect to server
    if(connect(clientSocket,(struct sockaddr*)&serverAddr , sizeof(serverAddr)) == -1){
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }
    
    //send string to server
    send(clientSocket , str1 , strlen(str1) , 0);
    send(clientSocket , str2 , strlen(str2) , 0);

    //Recceive response from server
    char response[10];
    read(clientSocket , response , sizeof(response));
    printf("Server response %d\n" , response);

    close(clientSocket);
    return 0;
    
}