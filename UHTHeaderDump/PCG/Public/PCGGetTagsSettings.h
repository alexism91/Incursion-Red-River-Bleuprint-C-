#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGGetTagsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetTagsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtractTagValues;
    
    UPCGGetTagsSettings();

};

