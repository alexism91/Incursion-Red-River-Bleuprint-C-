#pragma once
#include "CoreMinimal.h"
#include "InterchangePerTranslatorDialogOverride.generated.h"

class UInterchangeTranslatorBase;

USTRUCT(BlueprintType)
struct FInterchangePerTranslatorDialogOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInterchangeTranslatorBase> Translator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowImportDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowReimportDialog;
    
    INTERCHANGEENGINE_API FInterchangePerTranslatorDialogOverride();
};

