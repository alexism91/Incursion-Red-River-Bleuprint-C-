#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlendValueBucket.h"
#include "MeshBlendPrimitiveDataIndexHelper.h"
#include "MeshBlendProcessor.generated.h"

UCLASS(Blueprintable)
class MESHBLEND_API UMeshBlendProcessor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, FBlendValueBucket> BlendValueBucket;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMeshBlendPrimitiveDataIndexHelper PrimitiveDataIndexHelper;
    
public:
    UMeshBlendProcessor();

};

