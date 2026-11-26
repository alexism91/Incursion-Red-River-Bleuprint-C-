#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PartitionActor -FallbackName=PartitionActor
#include "PCGPartitionActor.generated.h"

class UPCGComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport, NotPlaceable)
class APCGPartitionActor : public APartitionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PCGGuid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    TMap<UPCGComponent*, TSoftObjectPtr<UPCGComponent>> LocalToOriginal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPCGComponent*, TSoftObjectPtr<UPCGComponent>> LoadedPreviewComponents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PCGGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse2DGrid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RuntimeGridDescriptorHash;
    
public:
    APCGPartitionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGComponent* GetOriginalComponent(const UPCGComponent* LocalComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGComponent* GetLocalComponent(const UPCGComponent* OriginalComponent) const;
    
    UFUNCTION(BlueprintPure)
    int64 BP_GetPCGGridSize() const;
    
};

