#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IRRAINoiseData.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAINoiseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Range;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Loudness;
    
    FIRRAINoiseData();
};

