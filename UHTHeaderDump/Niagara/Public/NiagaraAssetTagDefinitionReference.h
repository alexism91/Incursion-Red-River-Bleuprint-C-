#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraAssetTagDefinitionReference.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraAssetTagDefinitionReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AssetTagDefinitionGuid;
    
public:
    NIAGARA_API FNiagaraAssetTagDefinitionReference();
};

