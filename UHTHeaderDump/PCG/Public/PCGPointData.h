#pragma once
#include "CoreMinimal.h"
#include "PCGBasePointData.h"
#include "PCGPoint.h"
#include "PCGPointData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGPointData : public UPCGBasePointData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPoint> Points;
    
public:
    UPCGPointData();

    UFUNCTION(BlueprintCallable)
    void SetPoints(const TArray<FPCGPoint>& InPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FPCGPoint> GetPointsCopy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPCGPoint> GetPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPCGPoint GetPoint(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPoints() const;
    
};

