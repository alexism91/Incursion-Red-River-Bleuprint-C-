#pragma once
#include "CoreMinimal.h"
#include "PCGManagedComponentBase.h"
#include "PCGManagedComponent.generated.h"

class UActorComponent;

UCLASS(Blueprintable, MinimalAPI)
class UPCGManagedComponent : public UPCGManagedComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UActorComponent> GeneratedComponent;
    
    UPCGManagedComponent();

private:
    UFUNCTION(BlueprintCallable)
    void SetGeneratedComponentFromBP(TSoftObjectPtr<UActorComponent> InGeneratedComponent);
    
};

