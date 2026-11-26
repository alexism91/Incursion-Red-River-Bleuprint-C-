#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowImage -FallbackName=DataflowImage
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTerminalNode -FallbackName=DataflowTerminalNode
#include "DataflowTextureTerminalNode.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDataflowTextureTerminalNode : public FDataflowTerminalNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureAsset;
    
public:
    DATAFLOWENGINE_API FDataflowTextureTerminalNode();
};

