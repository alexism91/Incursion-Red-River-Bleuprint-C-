#pragma once
#include "CoreMinimal.h"
#include "PCGMeshSelectorBase.h"
#include "PCGSoftISMComponentDescriptor.h"
#include "PCGMeshSelectorByAttribute.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSoftISMComponentDescriptor TemplateDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttributeMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialOverrideAttributes;
    
    UPCGMeshSelectorByAttribute();

};

