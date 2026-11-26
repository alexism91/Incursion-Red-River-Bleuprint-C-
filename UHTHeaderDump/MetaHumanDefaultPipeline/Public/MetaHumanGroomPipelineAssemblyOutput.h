#pragma once
#include "CoreMinimal.h"
#include "MetaHumanGroomPipelineAssemblyOutput.generated.h"

class UGroomBindingAsset;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct METAHUMANDEFAULTPIPELINE_API FMetaHumanGroomPipelineAssemblyOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomBindingAsset* Binding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> OverrideMaterials;
    
    FMetaHumanGroomPipelineAssemblyOutput();
};

