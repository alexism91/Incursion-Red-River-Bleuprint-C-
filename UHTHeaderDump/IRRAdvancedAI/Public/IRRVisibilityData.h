#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "IRRNavVisibilityGrid.h"
#include "IRRVisibilityData.generated.h"

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRVisibilityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRNavVisibilityGrid Grid;
    
    UIRRVisibilityData();

};

