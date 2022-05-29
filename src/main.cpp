
#include <iostream>
#include <boost/asio.hpp>

const std::string addr = "localhost";
const int port = 6432;

int main() {
    std::cout << "hello world!" << std::endl;

    boost::asio::io_service service;
    boost::asio::ip::tcp::endpoint ep(boost::asio::ip::address::from_string(addr), port);
    boost::asio::ip::tcp::socket sock(service);
    sock.connect(ep);

    for (;;) {
    }
}