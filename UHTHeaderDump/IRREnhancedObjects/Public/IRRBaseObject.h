#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRBaseObject.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class IRRENHANCEDOBJECTS_API UIRRBaseObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceResetToClassDefaults;
    
    UIRRBaseObject();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DestroyObject();
    
};

