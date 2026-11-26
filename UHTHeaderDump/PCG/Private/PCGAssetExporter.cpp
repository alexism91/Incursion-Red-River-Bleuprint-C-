#include "PCGAssetExporter.h"
#include "Templates/SubclassOf.h"

UPCGAssetExporter::UPCGAssetExporter() {
}

TSubclassOf<UPCGDataAsset> UPCGAssetExporter::BP_GetAssetType_Implementation() const {
    return NULL;
}

bool UPCGAssetExporter::BP_ExportToAsset_Implementation(UPCGDataAsset* Asset) {
    return false;
}


