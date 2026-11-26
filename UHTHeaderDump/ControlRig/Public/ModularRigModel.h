#pragma once
#include "CoreMinimal.h"
#include "ModularRigConnections.h"
#include "RigHierarchyModulePath.h"
#include "RigModuleReference.h"
#include "ModularRigModel.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FModularRigModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigModuleReference> Modules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModularRigConnections Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRigHierarchyModulePath, FName> PreviousModulePaths;
    
    CONTROLRIG_API FModularRigModel();
};

