#include api.h
#include <avr/io.h>

// handles incoming msgs from the loom
void handleCANmsg(uint8_t destID, uint8_t msgID, uint8_t msg[], uint8_t msgLen){
    // currently empty, exists so that the avr-can lib doesn't complain
}

