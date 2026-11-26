#pragma once
#include "CoreMinimal.h"
#include "DataflowImage.h"
#include "DataflowNode.h"
#include "EDataflowImageCombineResolutionOption.h"
#include "EDataflowImageResolution.h"
#include "DataflowImageCombineChannelsNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowImageCombineChannelsNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Green;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Image;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowImageCombineResolutionOption ResolutionOptions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowImageResolution Resolution;
    
public:
    DATAFLOWCORE_API FDataflowImageCombineChannelsNode();
};

