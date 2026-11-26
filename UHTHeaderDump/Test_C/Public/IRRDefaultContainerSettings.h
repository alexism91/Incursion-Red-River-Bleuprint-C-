#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "IRRDefaultContainerSettings.generated.h"

class UInventoryDefaultContainerSettings;

UCLASS(Blueprintable)
class TEST_C_API UIRRDefaultContainerSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInventoryDefaultContainerSettings*> DefaultContainerList;
    
    UIRRDefaultContainerSettings();

};

