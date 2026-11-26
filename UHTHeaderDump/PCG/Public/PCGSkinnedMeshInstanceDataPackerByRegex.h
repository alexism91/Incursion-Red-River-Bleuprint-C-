#pragma once
#include "CoreMinimal.h"
#include "PCGSkinnedMeshInstanceDataPackerBase.h"
#include "PCGSkinnedMeshInstanceDataPackerByRegex.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGSkinnedMeshInstanceDataPackerByRegex : public UPCGSkinnedMeshInstanceDataPackerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegexPatterns;
    
    UPCGSkinnedMeshInstanceDataPackerByRegex();

};

