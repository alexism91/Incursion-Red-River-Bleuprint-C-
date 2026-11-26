#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HTNCustomLocationSource.generated.h"

class AActor;
class UWorldStateProxy;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class HTN_API UHTNCustomLocationSource : public UObject {
    GENERATED_BODY()
public:
    UHTNCustomLocationSource();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideLocations(TArray<FVector>& OutLocations, const AActor* Owner, const UWorldStateProxy* WorldStateProxy, const FBlackboardKeySelector& BlackboardKeySelector) const;
    
};

