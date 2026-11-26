#pragma once
#include "CoreMinimal.h"
#include "DataflowImage.h"
#include "DataflowNode.h"
#include "DataflowImageSplitChannelsNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowImageSplitChannelsNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Green;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Alpha;
    
public:
    DATAFLOWCORE_API FDataflowImageSplitChannelsNode();
};

