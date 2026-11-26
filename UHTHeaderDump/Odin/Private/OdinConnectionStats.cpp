#include "OdinConnectionStats.h"

FOdinConnectionStats::FOdinConnectionStats() {
    this->UdpTxDatagrams = 0;
    this->UdpTxBytes = 0;
    this->UdpRxDatagrams = 0;
    this->UdpRxBytes = 0;
    this->Rtt = 0.00f;
}

