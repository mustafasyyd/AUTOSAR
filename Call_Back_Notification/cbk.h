#ifndef CBK_H
#define CBK_H

typedef void (* Notfiy_cbk) (void);

struct Signal
{
    Notfiy_cbk notify_cbk   ; 
    int signal_priority     ;
    int signal_data         ; 
};

void send_signal_hal(const Signal& sig);


#endif /* CBK_H */