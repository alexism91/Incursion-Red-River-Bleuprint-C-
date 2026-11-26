#pragma once
#include "CoreMinimal.h"
#include "ETextImportTestFlags.h"
#include "TextImportTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FTextImportTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextImportTestFlags EmbeddedFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestString;
    
    ENGINE_API FTextImportTestStruct();
};

