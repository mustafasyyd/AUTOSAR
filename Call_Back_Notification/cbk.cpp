#include <iostream>
#include "cbk.h"

void send_signal_mcal(const Signal& sig)
{    
    
    std::cout 
    << "signal sent to MCAL \n";


    std::cout 
    <<"-----------------------------------"
    << "\nSignal Priority :  " << sig.signal_priority
    << "\nSignal Data     :  " << sig.signal_data
    <<"\n-----------------------------------\n";

    sig.notify_cbk();
}

void send_signal_hal(const Signal& sig)
{
    std::cout 
    << "signal sent to HAL \n";
    send_signal_mcal(sig);
}
