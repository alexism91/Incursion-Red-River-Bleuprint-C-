#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EditorFlagCollector.generated.h"

UCLASS(Blueprintable)
class UEditorFlagCollector : public UObject {
    GENERATED_BODY()
public:
    UEditorFlagCollector();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetFlagNames();
    
};

