#pragma once
#include "CoreMinimal.h"
#include "ShakeCameraNode.h"
#include "CompositeShakeCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCompositeShakeCameraNode : public UShakeCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShakeCameraNode*> Shakes;
    
    UCompositeShakeCameraNode();

};

