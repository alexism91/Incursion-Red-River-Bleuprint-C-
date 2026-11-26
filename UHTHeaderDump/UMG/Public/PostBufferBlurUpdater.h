#pragma once
#include "CoreMinimal.h"
#include "SlatePostBufferProcessorUpdater.h"
#include "PostBufferBlurUpdater.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UPostBufferBlurUpdater : public USlatePostBufferProcessorUpdater {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaussianBlurStrength;
    
    UPostBufferBlurUpdater();

};

