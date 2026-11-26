#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NinjaInputFunctionLibrary.generated.h"

class AActor;
class UActorComponent;
class UNinjaInputManagerComponent;

UCLASS(Blueprintable)
class NINJAINPUT_API UNinjaInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNinjaInputFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNinjaInputManagerComponent* GetInputManagerComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetInputBufferComponent(const AActor* Actor);
    
};

