#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRZoneDocument.h"
#include "IRRZoneLeaf.h"
#include "IRRZoneSubsystem.generated.h"

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRZoneSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIRRZoneDocument Document;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIRRZoneLeaf> Leaves;
    
public:
    UIRRZoneSubsystem();

    UFUNCTION(BlueprintCallable)
    void ReloadZones();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLeavesContaining(const FVector& Location, TArray<int32>& OutLeafIndices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRZoneLeaf> GetLeaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLeafByGuid(const FGuid& ZoneGuid, FIRRZoneLeaf& OutLeaf) const;
    
};

