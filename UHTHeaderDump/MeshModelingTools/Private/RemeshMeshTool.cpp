#include "RemeshMeshTool.h"
#include "RemeshMeshToolProperties.h"

URemeshMeshTool::URemeshMeshTool() {
    this->BasicProperties = CreateDefaultSubobject<URemeshMeshToolProperties>(TEXT("RemeshProperties"));
    this->MeshStatisticsProperties = NULL;
    this->preview = NULL;
    this->MeshElementsDisplay = NULL;
}


