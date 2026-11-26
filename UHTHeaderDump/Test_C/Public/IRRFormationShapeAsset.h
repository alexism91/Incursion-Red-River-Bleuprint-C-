#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "IRRFormationShape.h"
#include "IRRFormationShapeAsset.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRFormationShapeAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFormationShape Shape;
    
    UIRRFormationShapeAsset();

};

