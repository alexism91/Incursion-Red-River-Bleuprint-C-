#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeExternalDataDesc -FallbackName=StateTreeExternalDataDesc
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeSchema -FallbackName=StateTreeSchema
#include "CameraDirectorStateTreeSchema.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UCameraDirectorStateTreeSchema : public UStateTreeSchema {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeExternalDataDesc> ContextDataDescs;
    
public:
    UCameraDirectorStateTreeSchema();

};

