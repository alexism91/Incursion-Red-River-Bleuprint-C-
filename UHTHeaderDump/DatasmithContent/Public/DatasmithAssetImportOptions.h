#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportOptions.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithAssetImportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackagePath;
    
    DATASMITHCONTENT_API FDatasmithAssetImportOptions();
};

