#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "ArrayCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UArrayCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraNode*> Children;
    
    UArrayCameraNode();

};

