#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "MeshBlendActivatorSubsystem.generated.h"

class AActor;
class UMeshBlendActivatorLogic;
class UMeshBlendActivatorSubsystem;
class UWorld;

UCLASS(Blueprintable)
class MESHBLEND_API UMeshBlendActivatorSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMeshBlendActivatorLogic* MeshBlendActivatorLogic;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CachedCVarMeshBlendEnable;
    
public:
    UMeshBlendActivatorSubsystem();

    UFUNCTION(BlueprintCallable)
    void RefreshActor(AActor* Actor, bool bSoftReset);
    
    UFUNCTION(BlueprintCallable)
    static UMeshBlendActivatorSubsystem* GetInstance(const UWorld* World);
    
};

