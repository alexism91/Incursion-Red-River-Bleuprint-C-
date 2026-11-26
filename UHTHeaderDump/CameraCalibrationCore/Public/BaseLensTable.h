#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.generated.h"

class ULensFile;

USTRUCT(BlueprintType)
struct FBaseLensTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULensFile> LensFile;
    
public:
    CAMERACALIBRATIONCORE_API FBaseLensTable();
};

