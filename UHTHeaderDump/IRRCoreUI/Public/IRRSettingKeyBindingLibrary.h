#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "IRRKeyBindingConflict.h"
#include "IRRSettingKeyBindingLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRSettingKeyBindingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRSettingKeyBindingLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText JoinConflictNames(const TArray<FIRRKeyBindingConflict>& Conflicts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> GetConflictDisplayNames(const TArray<FIRRKeyBindingConflict>& Conflicts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindKeyBindingConflicts(const UObject* WorldContextObject, FKey Key, FName MappingName, int32 SlotIndex, const TArray<FName>& IgnoredMappingNames, TArray<FIRRKeyBindingConflict>& OutConflicts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearKeyBindingConflicts(const UObject* WorldContextObject, const TArray<FIRRKeyBindingConflict>& Conflicts);
    
};

