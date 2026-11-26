#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ItemAnimInterface.h"
#include "ItemAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TEST_C_API UItemAnimInstance : public UAnimInstance, public IItemAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsItemSnap;
    
    UItemAnimInstance();


    // Fix for true pure virtual functions not being implemented
};

