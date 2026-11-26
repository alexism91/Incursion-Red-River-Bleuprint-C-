#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolEditorGizmoAPI -FallbackName=InteractiveToolEditorGizmoAPI
#include "BaseMeshFromSplinesTool.generated.h"

class AActor;
class UCreateMeshObjectTypeProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UNewMeshMaterialProperties;
class UWorld;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseMeshFromSplinesTool : public UInteractiveTool, public IInteractiveToolEditorGizmoAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> TargetWorld;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> ActorsWithSplines;
    
public:
    UBaseMeshFromSplinesTool();


    // Fix for true pure virtual functions not being implemented
};

