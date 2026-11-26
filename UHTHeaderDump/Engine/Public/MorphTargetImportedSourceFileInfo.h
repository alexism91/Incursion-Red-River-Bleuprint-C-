#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MorphTargetImportedSourceFileInfo.generated.h"

USTRUCT(BlueprintType)
struct FMorphTargetImportedSourceFileInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DerivedDataHash;
    
public:
    ENGINE_API FMorphTargetImportedSourceFileInfo();
};

