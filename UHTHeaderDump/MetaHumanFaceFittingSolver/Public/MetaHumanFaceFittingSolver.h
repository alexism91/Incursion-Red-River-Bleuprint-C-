#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanFaceFittingSolver.generated.h"

class UMetaHumanConfig;
class UMetaHumanFaceAnimationSolver;

UCLASS(Blueprintable)
class METAHUMANFACEFITTINGSOLVER_API UMetaHumanFaceFittingSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDeviceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanConfig* DeviceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanFaceAnimationSolver* FaceAnimationSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanConfig* PredictiveSolver;
    
    UMetaHumanFaceFittingSolver();

};

