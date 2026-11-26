#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothCollisionPrim_SphereConnection.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_SphereConnection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SphereIndices[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OneSidedPlaneNormal;
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_SphereConnection();
};

