#pragma once
#include "CoreMinimal.h"
#include "PCGInstanceDataPackerBase.h"
#include "PCGInstanceDataPackerByRegex.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGInstanceDataPackerByRegex : public UPCGInstanceDataPackerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegexPatterns;
    
    UPCGInstanceDataPackerByRegex();

};

