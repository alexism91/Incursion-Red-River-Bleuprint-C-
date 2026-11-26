#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=EInterchangeTranslatorAssetType -FallbackName=EInterchangeTranslatorAssetType
#include "InterchangeDialogOverride.h"
#include "InterchangeImportSettings.h"
#include "InterchangeContentImportSettings.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeContentImportSettings : public FInterchangeImportSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeTranslatorAssetType, FName> DefaultPipelineStackOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeTranslatorAssetType, FInterchangeDialogOverride> ShowImportDialogOverride;
    
    INTERCHANGEENGINE_API FInterchangeContentImportSettings();
};

