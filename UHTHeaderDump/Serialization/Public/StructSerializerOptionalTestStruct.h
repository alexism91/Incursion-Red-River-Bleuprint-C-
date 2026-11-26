#pragma once
#include "CoreMinimal.h"
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerOptionalTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerOptionalTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FString> StrOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FString> StrOptionalUnset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<int32> IntOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<int32> IntOptionalUnset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FName> NameOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FName> NameOptionalUnset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FStructSerializerBuiltinTestStruct> StructOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FStructSerializerBuiltinTestStruct> StructOptionalUnset;
    
    SERIALIZATION_API FStructSerializerOptionalTestStruct();
};

