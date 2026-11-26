#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "DataflowAnyType.h"
#include "DataflowRotationTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowRotationTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
    DATAFLOWCORE_API FDataflowRotationTypes();
};

