#pragma once
#include "CoreMinimal.h"
#include "InterchangePerTranslatorDialogOverride.h"
#include "InterchangeDialogOverride.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeDialogOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowImportDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowReimportDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterchangePerTranslatorDialogOverride> PerTranslatorImportDialogOverride;
    
    INTERCHANGEENGINE_API FInterchangeDialogOverride();
};

