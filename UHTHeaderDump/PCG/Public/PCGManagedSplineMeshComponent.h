#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMeshComponentDescriptor -FallbackName=SplineMeshComponentDescriptor
#include "PCGCrc.h"
#include "PCGManagedComponent.h"
#include "PCGSplineMeshParams.h"
#include "PCGManagedSplineMeshComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGManagedSplineMeshComponent : public UPCGManagedComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMeshComponentDescriptor Descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSplineMeshParams SplineMeshParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGCrc SettingsCrc;
    
public:
    UPCGManagedSplineMeshComponent();

};

