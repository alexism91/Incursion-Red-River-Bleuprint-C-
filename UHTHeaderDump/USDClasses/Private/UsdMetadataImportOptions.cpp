#include "UsdMetadataImportOptions.h"

FUsdMetadataImportOptions::FUsdMetadataImportOptions() {
    this->bCollectMetadata = false;
    this->bCollectFromEntireSubtrees = false;
    this->bCollectOnComponents = false;
    this->bInvertFilters = false;
}

