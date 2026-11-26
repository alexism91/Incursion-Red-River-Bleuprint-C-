#include "InterchangeGenericMaterialPipeline.h"
#include "InterchangeGenericTexturePipeline.h"
#include "InterchangeSparseVolumeTexturePipeline.h"

UInterchangeGenericMaterialPipeline::UInterchangeGenericMaterialPipeline() {
    this->bImportMaterials = true;
    this->SearchLocation = EInterchangeMaterialSearchLocation::Local;
    this->MaterialImport = EInterchangeMaterialImportOption::ImportAsMaterials;
    this->bIdentifyDuplicateMaterials = false;
    this->bCreateMaterialInstanceForParent = false;
    this->TexturePipeline = CreateDefaultSubobject<UInterchangeGenericTexturePipeline>(TEXT("TexturePipeline"));
    this->SparseVolumeTexturePipeline = CreateDefaultSubobject<UInterchangeSparseVolumeTexturePipeline>(TEXT("SparseVolumeTexturePipeline"));
    this->bOverrideDisplacement = false;
    this->OverrideDisplacementCenter = 0.50f;
    this->BaseNodeContainer = NULL;
}


