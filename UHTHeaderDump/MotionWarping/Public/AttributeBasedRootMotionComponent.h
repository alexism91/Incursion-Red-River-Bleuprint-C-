#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EAttributeBasedRootMotionMode.h"
#include "AttributeBasedRootMotionComponent.generated.h"

class ACharacter;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAttributeBasedRootMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRootMotion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeBasedRootMotionMode Mode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> CharacterOwner;
    
public:
    UAttributeBasedRootMotionComponent(const FObjectInitializer& ObjectInitializer);

};

