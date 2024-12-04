#include <iostream>
#include "logger.hpp"
#include <thread>

using namespace std;

void user1logs() {
    Logger* logger1 = Logger::getLogger();
    this_thread::sleep_for(chrono::milliseconds(1000));  // Introduce a delay
    logger1->Log("This msg is from user1.");
}

void user2logs() {
    Logger* logger2 = Logger::getLogger();
    this_thread::sleep_for(chrono::milliseconds(1000));  // Introduce a delay
    logger2->Log("This msg is from user2.");
}
int main() {
    thread t1(user1logs);
    thread t2(user2logs);
    
    t1.join();
    t2.join();

    return 0;
}