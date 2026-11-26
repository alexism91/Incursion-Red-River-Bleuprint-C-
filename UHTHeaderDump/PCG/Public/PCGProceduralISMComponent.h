#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "PCGProceduralISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPCGProceduralISMComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox WorldBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceMinDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceStartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceEndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LocalBounds;
    
public:
    UPCGProceduralISMComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNumInstances(int32 InNumInstances);
    
    UFUNCTION(BlueprintCallable)
    void SetNumCustomDataFloats(int32 InNumCustomDataFloats);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDrawDistance(int32 InMinDrawDistance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLocalBounds(const FBox& InWorldBounds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCullDistances(int32 InStartCullDistance, int32 InEndCullDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetBounds(const FBox& InWorldBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCustomDataFloats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinDrawDistance(int32& OutMinDrawDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCullDistances(int32& OutStartCullDistance, int32& OutEndCullDistance) const;
    
    UFUNCTION(BlueprintCallable)
    void GetBounds(FBox& OutWorldBounds);
    
    UFUNCTION(BlueprintCallable)
    void ClearInstances();
    
};

