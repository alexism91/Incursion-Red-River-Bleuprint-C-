#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EGroupBoundaryConstraint.h"
#include "EMaterialBoundaryConstraint.h"
#include "EMeshBoundaryConstraint.h"
#include "MeshConstraintProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshConstraintProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveSharpEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshBoundaryConstraint MeshBoundaryConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupBoundaryConstraint GroupBoundaryConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialBoundaryConstraint MaterialBoundaryConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventNormalFlips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventTinyTriangles;
    
    UMeshConstraintProperties();

protected:
    UFUNCTION(BlueprintCallable)
    bool IsPreventTinyTrianglesEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPreventNormalFlipsEnabled() const;
    
};

