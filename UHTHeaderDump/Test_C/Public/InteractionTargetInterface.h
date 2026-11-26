#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InteractionTargetInterface.generated.h"

class AActor;
class UIRRMissionData;

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractionTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractionTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIRRMissionData* TargetOperation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag TargetItemTag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveNotify(AActor* InteractingActor, const FName& NotifyName);
    
};

