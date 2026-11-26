#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigBaseMetadata.h"
#include "RigLinearColorArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct FRigLinearColorArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Value;
    
public:
    CONTROLRIG_API FRigLinearColorArrayMetadata();
};

