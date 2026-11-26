#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IRRAINavNodeRef.h"
#include "IRRNavLocation.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRNavLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAINavNodeRef NodeRef;
    
    FIRRNavLocation();
};

