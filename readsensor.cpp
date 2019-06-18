
#include "mscl/mscl.h"
cout<< mscl::MSCL_VERSION.str() << endl;

//create the connection with port and baud rate
mscl::Connection connection = mscl::Connection::Serial("COM3", 921600);
