#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PCGPoint.h"
#include "PCGSpatialDataWithPointCache.h"
#include "PCGPolyLineData.generated.h"

class UPCGMetadata;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGPolyLineData : public UPCGSpatialDataWithPointCache {
    GENERATED_BODY()
public:
    UPCGPolyLineData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void WriteMetadataToPoint(float InputKey, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const;
    
    UFUNCTION(BlueprintPure)
    FTransform K2_GetTransformAtDistance(int32 SegmentIndex, double Distance, UPARAM(Ref) FBox& OutBounds, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtAlpha(float Alpha) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTangentsAtSegmentStart(int32 SegmentIndex, FVector& OutArriveTangent, FVector& OutLeaveTangent) const;
    
    UFUNCTION(BlueprintPure)
    double GetSegmentLength(int32 SegmentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSegments() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtDistance(int32 SegmentIndex, double Distance, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtAlpha(float Alpha) const;
    
    UFUNCTION(BlueprintPure)
    double GetLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetInputKeyAtDistance(int32 SegmentIndex, double Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputKeyAtAlpha(float Alpha) const;
    
    UFUNCTION(BlueprintPure)
    double GetDistanceAtSegmentStart(int32 SegmentIndex) const;
    
    UFUNCTION(BlueprintPure)
    double GetCurvatureAtDistance(int32 SegmentIndex, double Distance) const;
    
    UFUNCTION(BlueprintPure)
    float GetAlphaAtDistance(int32 SegmentIndex, double Distance) const;
    
};

