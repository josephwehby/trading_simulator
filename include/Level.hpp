#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <iostream>
#include <map>
#include "Order.hpp"

class Level {
    public:
        Level(std::shared_ptr<Order>);
        unsigned int getLevelQuantity();
        unsigned int getOrderQuantity();
        void printLevel();
    private:
        friend class OrderBook;
        double price;
        std::map<double, std::shared_ptr<Order>> level_orders;
};

#endif