#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectTreeGraphObject.h"
#include "CameraRigTransitionCondition.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, MinimalAPI)
class UCameraRigTransitionCondition : public UObject, public IObjectTreeGraphObject {
    GENERATED_BODY()
public:
    UCameraRigTransitionCondition();


    // Fix for true pure virtual functions not being implemented
};

