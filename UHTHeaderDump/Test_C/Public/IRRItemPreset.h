#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DefaultAttachment.h"
#include "DefaultItem.h"
#include "IRRItemPreset.generated.h"

class UIRRItemDefinition;

UCLASS(Blueprintable)
class TEST_C_API UIRRItemPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultAttachment> DefaultAttachments;
    
    UIRRItemPreset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDefaultItem GetDefaultItem() const;
    
};

