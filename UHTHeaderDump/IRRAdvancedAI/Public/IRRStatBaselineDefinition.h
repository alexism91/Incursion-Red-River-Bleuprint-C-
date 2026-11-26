#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRConfig -ObjectName=IRRConfigDocumentBase -FallbackName=IRRConfigDocumentBase
#include "IRRAIStatEffect.h"
#include "IRRStatBaselineDefinition.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRStatBaselineDefinition : public FIRRConfigDocumentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatBaselineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIStatEffect Baseline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggressivenessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxOptimizationLevel;
    
    FIRRStatBaselineDefinition();
};

