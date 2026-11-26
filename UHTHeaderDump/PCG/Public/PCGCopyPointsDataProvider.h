#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=UintVector2 -FallbackName=UintVector2
#include "PCGComputeDataProvider.h"
#include "PCGCopyPointsDataProvider.generated.h"

UCLASS(Blueprintable)
class UPCGCopyPointsDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUintVector2> SourceAndTargetDataIndices;
    
    UPCGCopyPointsDataProvider();

};

