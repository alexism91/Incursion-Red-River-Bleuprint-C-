#pragma once
#include "CoreMinimal.h"
#include "PCGManagedComponentBase.h"
#include "PCGManagedComponentList.generated.h"

class UActorComponent;

UCLASS(Blueprintable, MinimalAPI)
class UPCGManagedComponentList : public UPCGManagedComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UActorComponent>> GeneratedComponents;
    
    UPCGManagedComponentList();

private:
    UFUNCTION(BlueprintCallable)
    void SetGeneratedComponentsFromBP(const TArray<TSoftObjectPtr<UActorComponent>>& InGeneratedComponent);
    
};

