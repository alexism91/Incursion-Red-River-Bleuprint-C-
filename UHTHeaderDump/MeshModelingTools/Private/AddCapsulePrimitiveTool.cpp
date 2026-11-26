#include "AddCapsulePrimitiveTool.h"
#include "ProceduralCapsuleToolProperties.h"

UAddCapsulePrimitiveTool::UAddCapsulePrimitiveTool(.SetDefaultSubobjectClass<UProceduralCapsuleToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Capsule");
}


