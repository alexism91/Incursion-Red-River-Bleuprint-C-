#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptableToolPointSet.generated.h"

class UPointSetComponent;
class UPreviewGeometry;
class UScriptableToolPoint;

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolPointSet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* ToolDrawableGeometry;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPointSetComponent* PointSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolPoint*> PointComponents;
    
public:
    UScriptableToolPointSet();

    UFUNCTION(BlueprintCallable)
    void SetAllPointsSize(float Size);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPointsColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void RemovePoint(UScriptableToolPoint* Point);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPoints();
    
    UFUNCTION(BlueprintCallable)
    UScriptableToolPoint* AddPoint();
    
};

