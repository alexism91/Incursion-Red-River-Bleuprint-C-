#pragma once
#include "CoreMinimal.h"
#include "CaptureData.h"
#include "MeshCaptureData.generated.h"

class UObject;

UCLASS(Blueprintable)
class CAPTUREDATACORE_API UMeshCaptureData : public UCaptureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TargetMesh;
    
    UMeshCaptureData();

};

