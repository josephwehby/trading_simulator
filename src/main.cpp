#include <iostream>
#include "OrderBook.hpp"
#include "Order.hpp"
#include "User.hpp"
#include <memory>

int main() {

    OrderBook orderbook;
    std::shared_ptr<User> user;
    std::shared_ptr<Order> bid;
    std::shared_ptr<Order> bid2;
    std::shared_ptr<Order> ask;
    std::shared_ptr<Order> ask2;
    
    user = std::make_shared<User>("Joseph", 100);
    bid = std::make_shared<Order>(user, Buy, 100, 3.99, 10.0);
    bid2 = std::make_shared<Order>(user, Buy, 40, 3.97, 11.0);
    ask = std::make_shared<Order>(user, Sell, 100, 4.02, 10.6);
    ask2 = std::make_shared<Order>(user, Sell, 70, 4.13, 10.6);
    std::cout << "Trading Simulator" << std::endl;

    orderbook.addOrder(bid);
    orderbook.addOrder(ask);
    orderbook.addOrder(ask2);
    orderbook.addOrder(bid2);
    orderbook.printOrderBook();
    
    return 0;
}