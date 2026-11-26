#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "IRRExtractionZoneActor.generated.h"

class UIRRExtractionComponent;
class UShapeComponent;

UCLASS(Blueprintable, NoExport)
class IRRMISSIONSYSTEM_API AIRRExtractionZoneActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> AssignedFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FlareClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnFlareIfMissing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnedFlareOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIRRExtractionComponent* ExtractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UShapeComponent* ZoneVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SignalFlare;
    
public:
    AIRRExtractionZoneActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnOpenStateApplied(bool bIsOpen);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtractionOpen() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOpenUpdated(bool bIsOpen);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSignalFlare() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRExtractionComponent* GetExtractionComponent() const;
    
};

