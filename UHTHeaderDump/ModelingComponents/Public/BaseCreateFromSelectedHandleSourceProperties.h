#pragma once
#include "CoreMinimal.h"
#include "EBaseCreateFromSelectedTargetType.h"
#include "OnAcceptHandleSourcesProperties.h"
#include "BaseCreateFromSelectedHandleSourceProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBaseCreateFromSelectedTargetType OutputWriteTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputNewName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputExistingName;
    
    UBaseCreateFromSelectedHandleSourceProperties();

};

