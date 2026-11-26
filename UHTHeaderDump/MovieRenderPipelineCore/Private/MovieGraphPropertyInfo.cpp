#include "MovieGraphPropertyInfo.h"

FMovieGraphPropertyInfo::FMovieGraphPropertyInfo() {
    this->bIsDynamicProperty = false;
    this->ValueType = EMovieGraphValueType::None;
    this->ValueTypeObject = NULL;
    this->bIsPermanentlyExposed = false;
}

