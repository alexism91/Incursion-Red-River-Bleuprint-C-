#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask -FallbackName=HTNTask
#include "EHTNMovementChange.h"
#include "HTNTask_UpdateMovementModes.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_UpdateMovementModes : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNMovementChange Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNMovementChange Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WalkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrouchTag;
    
    UHTNTask_UpdateMovementModes();

};

