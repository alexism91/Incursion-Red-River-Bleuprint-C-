#pragma once
#include "CoreMinimal.h"
#include "InterchangePipelineStack.h"
#include "InterchangeImportSettings.generated.h"

class UInterchangePipelineConfigurationBase;

USTRUCT(BlueprintType)
struct FInterchangeImportSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInterchangePipelineStack> PipelineStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultPipelineStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInterchangePipelineConfigurationBase> ImportDialogClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowImportDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowReimportDialog;
    
    INTERCHANGEENGINE_API FInterchangeImportSettings();
};

