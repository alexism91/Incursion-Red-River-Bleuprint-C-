#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CreateActorParams.h"
#include "CreateActorResult.h"
#include "CreateComponentParams.h"
#include "CreateComponentResult.h"
#include "CreateMaterialObjectParams.h"
#include "CreateMaterialObjectResult.h"
#include "CreateMeshObjectParams.h"
#include "CreateMeshObjectResult.h"
#include "CreateTextureObjectParams.h"
#include "CreateTextureObjectResult.h"
#include "ModelingObjectsCreationAPI.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UModelingObjectsCreationAPI : public UObject {
    GENERATED_BODY()
public:
    UModelingObjectsCreationAPI();

    UFUNCTION(BlueprintCallable)
    FCreateTextureObjectResult CreateTextureObject(const FCreateTextureObjectParams& CreateTexParams);
    
    UFUNCTION(BlueprintCallable)
    FCreateComponentResult CreateNewComponentOnActor(const FCreateComponentParams& CreateComponentParams);
    
    UFUNCTION(BlueprintCallable)
    FCreateActorResult CreateNewActor(const FCreateActorParams& CreateActorParams);
    
    UFUNCTION(BlueprintCallable)
    FCreateMeshObjectResult CreateMeshObject(const FCreateMeshObjectParams& CreateMeshParams);
    
    UFUNCTION(BlueprintCallable)
    FCreateMaterialObjectResult CreateMaterialObject(const FCreateMaterialObjectParams& CreateMaterialParams);
    
};

