#include "Connection.h"
#include "EventLoop.h"
#include "Socket.h"
#include "TcpServer.h"
#include <iostream>
#include <map>

int main() {
  // std::map<int, Connection *> clients;

  // EventLoop *loop = new EventLoop();
  // Server *server = new Server(loop);

  // server->NewConnect(
  //     [&](Connection *conn) {
  //     int clnt_fd = conn->GetSocket()->fd();
  //     std::cout << "New connection fd: " << clnt_fd << std::endl;
  //     clients[clnt_fd] = conn;
  //       for(auto &each : clients){
  //       Connection *client = each.second;
  //       client->Send(conn->ReadBuffer());
  //     }
  // });

  // server->OnMessage(
  //   [&](Connection *conn){
  //     std::cout << "Message from client " << conn->ReadBuffer() << std::endl;
  //     for(auto &each : clients){
  //       Connection *client = each.second;
  //       client->Send(conn->ReadBuffer());
  //     }
  //   }
  // );

  // loop->Loop();
  return 0;
}
