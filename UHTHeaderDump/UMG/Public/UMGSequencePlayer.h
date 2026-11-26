#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UMGSequencePlayer.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UUMGSequencePlayer : public UObject {
    GENERATED_BODY()
public:
    UUMGSequencePlayer();

    UFUNCTION(BlueprintCallable)
    void SetUserTag(FName InUserTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUserTag() const;
    
};

