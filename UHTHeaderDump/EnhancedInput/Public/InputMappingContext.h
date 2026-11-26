#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EMappingContextInputModeFilterOptions.h"
#include "EMappingContextRegistrationTrackingMode.h"
#include "EnhancedActionKeyMapping.h"
#include "InputMappingContext.generated.h"

class UInputAction;

UCLASS(Blueprintable, MinimalAPI, Config=Input)
class UInputMappingContext : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnhancedActionKeyMapping> Mappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContextInputModeFilterOptions InputModeFilterOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery InputModeQueryOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContextRegistrationTrackingMode RegistrationTrackingMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContextDescription;
    
    UInputMappingContext();

    UFUNCTION(BlueprintCallable)
    void UnmapKey(const UInputAction* Action, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void UnmapAllKeysFromAction(const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable)
    void UnmapAll();
    
    UFUNCTION(BlueprintCallable)
    static bool ShouldShowInputModeQuery();
    
    UFUNCTION(BlueprintCallable)
    FEnhancedActionKeyMapping MapKey(const UInputAction* Action, FKey ToKey);
    
};

