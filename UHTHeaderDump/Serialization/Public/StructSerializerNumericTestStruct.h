#pragma once
#include "CoreMinimal.h"
#include "StructSerializerNumericTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerNumericTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 int8;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 int16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 int32;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 int64;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 uint8;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 uint16;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 uint32;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 uint64;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Double;
    
    SERIALIZATION_API FStructSerializerNumericTestStruct();
};

