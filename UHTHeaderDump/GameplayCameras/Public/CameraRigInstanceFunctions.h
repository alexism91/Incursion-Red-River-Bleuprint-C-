#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CameraRigInstanceID.h"
#include "CameraRigInstanceFunctions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCameraRigInstanceFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraRigInstanceFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FCameraRigInstanceID InstanceId);
    
};

