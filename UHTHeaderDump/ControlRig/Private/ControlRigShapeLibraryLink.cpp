#include "ControlRigShapeLibraryLink.h"

UControlRigShapeLibraryLink::UControlRigShapeLibraryLink() {
    this->ShapeLibraryCached = NULL;
}

void UControlRigShapeLibraryLink::SetShapeLibrary(TSoftObjectPtr<UControlRigShapeLibrary> InShapeLibrary) {
}

TSoftObjectPtr<UControlRigShapeLibrary> UControlRigShapeLibraryLink::GetShapeLibrary() const {
    return NULL;
}


