#pragma once
#include "CoreMinimal.h"
#include "InterchangeImportSettings.h"
#include "InterchangePerTranslatorDialogOverride.h"
#include "InterchangeSceneImportSettings.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeSceneImportSettings : public FInterchangeImportSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterchangePerTranslatorDialogOverride> PerTranslatorDialogOverride;
    
    INTERCHANGEENGINE_API FInterchangeSceneImportSettings();
};

