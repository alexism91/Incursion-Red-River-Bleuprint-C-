#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ConstraintComponentData.generated.h"

USTRUCT(BlueprintType)
struct FConstraintComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConstraintID;
    
    MOVIESCENETRACKS_API FConstraintComponentData();
};

