#pragma once
#include "CoreMinimal.h"
#include "IRRBotSpecializationBase.h"
#include "IRRSniperSpecialization.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRSniperSpecialization : public FIRRBotSpecializationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldStillSeconds;
    
    FIRRSniperSpecialization();
};

