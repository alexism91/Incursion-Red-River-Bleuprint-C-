#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ECollisionGeometryMode.h"
#include "PhysicsBoxData.h"
#include "PhysicsCapsuleData.h"
#include "PhysicsConvexData.h"
#include "PhysicsLevelSetData.h"
#include "PhysicsSphereData.h"
#include "PhysicsObjectToolPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionGeometryMode CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsSphereData> Spheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsBoxData> Boxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsCapsuleData> Capsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsConvexData> Convexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsLevelSetData> LevelSets;
    
    UPhysicsObjectToolPropertySet();

};

