#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ScriptableToolPoint.generated.h"

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolPoint : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointId;
    
public:
    UScriptableToolPoint();

    UFUNCTION(BlueprintCallable)
    void SetPointSize(float Thickness);
    
    UFUNCTION(BlueprintCallable)
    void SetPointPosition(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    void SetPointDepthBias(float DepthBias);
    
    UFUNCTION(BlueprintCallable)
    void SetPointColor(FColor Color);
    
};

