#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "DataflowImage.h"
#include "DataflowNode.h"
#include "EDataflowImageResolution.h"
#include "DataflowImageFromColorNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowImageFromColorNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FillColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowImageResolution Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowImage Image;
    
public:
    DATAFLOWCORE_API FDataflowImageFromColorNode();
};

