#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoftSplineMeshComponentDescriptor -FallbackName=SoftSplineMeshComponentDescriptor
#include "PCGObjectPropertyOverrideDescription.h"
#include "PCGSettings.h"
#include "PCGSplineMeshParams.h"
#include "PCGSpawnSplineMeshSettings.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UPCGSpawnSplineMeshSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftSplineMeshComponentDescriptor SplineMeshDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSplineMeshParams SplineMeshParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PostProcessFunctionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGObjectPropertyOverrideDescription> SplineMeshOverrideDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGObjectPropertyOverrideDescription> SplineMeshParamsOverride;
    
    UPCGSpawnSplineMeshSettings();

};

