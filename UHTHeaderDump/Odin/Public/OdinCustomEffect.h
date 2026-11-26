#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OdinCustomEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class ODIN_API UOdinCustomEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effectId;
    
    UOdinCustomEffect();

    UFUNCTION(BlueprintCallable)
    bool RemoveSelfFromParent();
    
};

