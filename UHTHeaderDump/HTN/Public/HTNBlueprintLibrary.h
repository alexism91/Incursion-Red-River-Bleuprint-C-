#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "HTNBlueprintLibrary.generated.h"

class AAIController;
class UActorComponent;
class UHTN;
class UHTNComponent;
class UObject;

UCLASS(Blueprintable)
class HTN_API UHTNBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHTNBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static UHTNComponent* SetUpHTNComponent(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    static bool RunHTN(AAIController* AIController, UHTN* HTNAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetClosestComponentsOfClass(TArray<UActorComponent*>& OutComponents, const UObject* WorldContextObject, TSubclassOf<UActorComponent> ComponentClass, const FVector& Location, int32 MaxNumComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllComponentsOfClass(TArray<UActorComponent*>& OutComponents, const UObject* WorldContextObject, TSubclassOf<UActorComponent> ComponentClass);
    
};

