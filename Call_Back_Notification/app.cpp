#include <iostream>
#include "cbk.h"

void signal_al_notify(void)
{
    std::cout 
    << "signal sent back to AL \n";
}

Signal comm_sig
{   
    signal_al_notify,
    0x12            ,
    0X01            
};

int main()
{
    send_signal_hal(comm_sig);

    return 0;
}