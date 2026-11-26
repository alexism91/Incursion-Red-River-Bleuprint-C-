#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ECameraRigInitialOrientation.h"
#include "ObjectTreeGraphObject.h"
#include "CameraRigTransition.generated.h"

class UBlendCameraNode;
class UCameraRigTransitionCondition;

UCLASS(Blueprintable, MinimalAPI)
class UCameraRigTransition : public UObject, public IObjectTreeGraphObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraRigTransitionCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlendCameraNode* Blend;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraRigInitialOrientation InitialOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideInitialOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCameraRigMerging;
    
    UCameraRigTransition();


    // Fix for true pure virtual functions not being implemented
};

