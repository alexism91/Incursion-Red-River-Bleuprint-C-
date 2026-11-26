#include "SensorTagSettings.h"

FSensorTagSettings::FSensorTagSettings() {
    this->MinimumQuadTreeSize = 0.00f;
    this->NodeCantSplit = 0;
    this->QtOtSwitch = ESenseSys_QtOtSwitch::OcTree;
}

