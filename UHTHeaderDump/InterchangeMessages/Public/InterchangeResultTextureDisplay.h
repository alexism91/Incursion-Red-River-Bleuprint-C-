#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeResultDisplay_Generic -FallbackName=InterchangeResultDisplay_Generic
#include "InterchangeResultTextureDisplay.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultTextureDisplay : public UInterchangeResultDisplay_Generic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextureName;
    
    UInterchangeResultTextureDisplay();

};

