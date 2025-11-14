#ifndef ISRAM_INTERFACE_HPP
#define ISRAM_INTERFACE_HPP

#include <verilated.h>
#include <condition_variable>
#include <cstdint>

#define AUTO_SIG(name, msb, lsb) \
    typename std::conditional <(msb-lsb+1) <=  8, CData, \
    typename std::conditional <(msb-lsb+1) <= 16, SData, \
    typename std::conditional <(msb-lsb+1) <= 32, IData, QData >::type >::type >::type name

#define AUTO_IN(name, msb, lsb)  AUTO_SIG(name, msb, lsb)
#define AUTO_OUT(name, msb, lsb) AUTO_SIG(name, msb, lsb)

// struct isram_interface{
//     // AUTO_IN(*we, 0, 0) = NULL;
//     AUTO_IN(*ce, 0, 0) = NULL;
//     AUTO_IN(*addr, 31, 0) = NULL;
//     // AUTO_IN(*wdata, 31, 0) = NULL;
//     AUTO_OUT(*rdata, 31, 0) = NULL;
// };

// class isram(
//     private:

//         // queue
//         // AUTO_IN(we, 0, 0);
//         AUTO_IN(ce, 0, 0);
//         AUTO_IN(addr, 31, 0);
//         // AUTO_IN(wdata, 31, 0);
//         AUTO_OUT(rdata, 31, 0);

//         isram_interface isram_itf;

//         void handle_request(){
//         }

//         void send_response(){
//         }

//         void access_memory(){

//         }


//     public:
//         isram(isram_interface& itf){
//             isram_itf = itf;
//         }
//         void eval(){

//         }
// )

#endif