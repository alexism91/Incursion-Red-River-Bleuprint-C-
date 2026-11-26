#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshReplacementCommandChangeTarget -FallbackName=MeshReplacementCommandChangeTarget
#include "DynamicMeshReplacementChangeTarget.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UDynamicMeshReplacementChangeTarget : public UObject, public IMeshReplacementCommandChangeTarget {
    GENERATED_BODY()
public:
    UDynamicMeshReplacementChangeTarget();


    // Fix for true pure virtual functions not being implemented
};

