#include "mbed.h"

struct IntVector {
    int x;
    int y;
};

int main() {
    IntVector p;
    
    p.x = -3;
    p.y = 1;
    
    printf("(%d, %d)\r\n", p.x, p.y);
    
    // Do nothing, forever, when the program is complete
    while (true) sleep();
}
