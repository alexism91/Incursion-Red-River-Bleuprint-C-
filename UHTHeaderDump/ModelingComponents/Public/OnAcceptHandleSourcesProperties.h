#pragma once
#include "CoreMinimal.h"
#include "EHandleSourcesMethod.h"
#include "OnAcceptHandleSourcesPropertiesBase.h"
#include "OnAcceptHandleSourcesProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandleSourcesMethod HandleInputs;
    
    UOnAcceptHandleSourcesProperties();

};

