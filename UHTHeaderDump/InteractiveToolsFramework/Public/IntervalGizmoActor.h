#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "IntervalGizmoActor.generated.h"

class UGizmoLineHandleComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class AIntervalGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* UpIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* DownIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* ForwardIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* BackwardIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* RightIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* LeftIntervalComponent;
    
    AIntervalGizmoActor(const FObjectInitializer& ObjectInitializer);

};

