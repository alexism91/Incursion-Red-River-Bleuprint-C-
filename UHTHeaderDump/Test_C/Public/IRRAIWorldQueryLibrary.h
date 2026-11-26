#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRAIWorldQueryLibrary.generated.h"

class AIRRBaseCharacter;

UCLASS(Blueprintable)
class TEST_C_API UIRRAIWorldQueryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRAIWorldQueryLibrary();

    UFUNCTION(BlueprintCallable)
    static void FindFriendlyCharactersInRange(const AIRRBaseCharacter* Querier, const FVector& Location, const float Radius, TArray<AIRRBaseCharacter*>& OutCharacters);
    
};

