#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=PCG -ObjectName=PCGContext -FallbackName=PCGContext
#include "RuntimeNavModStatics.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class RUNTIMENAVAREAMODIFIERS_API URuntimeNavModStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URuntimeNavModStatics();

    UFUNCTION(BlueprintCallable)
    static void AddManagedComponent(UPARAM(Ref) FPCGContext& Context, UActorComponent* InComponent);
    
};

