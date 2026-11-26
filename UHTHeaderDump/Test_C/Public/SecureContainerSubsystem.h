#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "SecureContainerSubsystem.generated.h"

class AIRRBaseCharacter;
class APlayerController;
class ASecureContainer;
class ASecureContainerSession;

UCLASS(Blueprintable)
class TEST_C_API USecureContainerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASecureContainer*> Containers;
    
public:
    USecureContainerSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AIRRBaseCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASecureContainerSession* FindSessionFor(APlayerController* PlayerController) const;
    
};

