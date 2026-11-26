#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGComputeGraphs.h"
#include "PCGGraphTasks.h"
#include "PCGStackContext.h"
#include "PCGGraphCompilationData.generated.h"

UCLASS(Blueprintable)
class UPCGGraphCompilationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FPCGGraphTasks> Tasks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FPCGStackContext> StackContexts;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FPCGComputeGraphs> ComputeGraphs;
    
    UPCGGraphCompilationData();

};

