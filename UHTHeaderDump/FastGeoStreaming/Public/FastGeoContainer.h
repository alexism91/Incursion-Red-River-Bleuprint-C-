#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsBodyInstanceOwnerResolver -FallbackName=PhysicsBodyInstanceOwnerResolver
#include "FastGeoContainer.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew, Within=Level)
class FASTGEOSTREAMING_API UFastGeoContainer : public UAssetUserData, public IPhysicsBodyInstanceOwnerResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Assets;
    
public:
    UFastGeoContainer();


    // Fix for true pure virtual functions not being implemented
};

