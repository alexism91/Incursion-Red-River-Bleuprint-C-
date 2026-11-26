#include "RigVMObjectArchive.h"

FRigVMObjectArchive::FRigVMObjectArchive() {
    this->UncompressedSize = 0;
    this->CompressedSize = 0;
    this->bIsCompressed = false;
}

