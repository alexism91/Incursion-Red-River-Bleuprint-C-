#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedTool -FallbackName=BaseCreateFromSelectedTool
#include "SelfUnionMeshesTool.generated.h"

class ULineSetComponent;
class USelfUnionMeshesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelfUnionMeshesToolProperties* Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULineSetComponent* DrawnLineSet;
    
public:
    USelfUnionMeshesTool();

};

