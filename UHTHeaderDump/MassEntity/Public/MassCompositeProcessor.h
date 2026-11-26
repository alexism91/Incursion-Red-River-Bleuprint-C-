#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "MassRuntimePipeline.h"
#include "MassCompositeProcessor.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UMassCompositeProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassRuntimePipeline ChildPipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
public:
    UMassCompositeProcessor();

};

