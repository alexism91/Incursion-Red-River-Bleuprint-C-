#pragma once
#include "CoreMinimal.h"
#include "EHandleSourcesMethod.h"
#include "OnAcceptHandleSourcesPropertiesBase.h"
#include "OnAcceptHandleSourcesPropertiesSingle.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandleSourcesMethod HandleInputs;
    
    UOnAcceptHandleSourcesPropertiesSingle();

};

