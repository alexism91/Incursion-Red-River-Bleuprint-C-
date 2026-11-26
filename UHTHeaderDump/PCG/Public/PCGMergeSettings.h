#pragma once
#include "CoreMinimal.h"
#include "PCGSettingsWithDynamicInputs.h"
#include "PCGMergeSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGMergeSettings : public UPCGSettingsWithDynamicInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergeMetadata;
    
    UPCGMergeSettings();

};

