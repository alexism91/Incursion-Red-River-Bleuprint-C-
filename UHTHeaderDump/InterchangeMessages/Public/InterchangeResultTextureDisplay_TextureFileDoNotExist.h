#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultTextureDisplay.h"
#include "InterchangeResultTextureDisplay_TextureFileDoNotExist.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultTextureDisplay_TextureFileDoNotExist : public UInterchangeResultTextureDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialName;
    
    UInterchangeResultTextureDisplay_TextureFileDoNotExist();

};

