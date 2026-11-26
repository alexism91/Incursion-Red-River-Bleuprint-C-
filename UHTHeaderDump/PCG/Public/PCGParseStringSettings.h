#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTypes.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGMetadataSettingsBase.h"
#include "PCGParseStringSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGParseStringSettings : public UPCGMetadataSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypes TargetType;
    
    UPCGParseStringSettings();

};

