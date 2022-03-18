#include "Header Files/interface.h"
#include "Header Files/hint.h"

int main() {
    pullUsers();
    pullGoods();
    pullOrders();

    welcomeMessage();
    MAIN_Interface();
    exitingMessage();
    
    pushUsers();
    pushGoods();
    pushOrders();
    return 0;
}
