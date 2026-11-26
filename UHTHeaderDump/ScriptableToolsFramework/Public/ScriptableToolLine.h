#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ScriptableToolLine.generated.h"

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolLine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LineID;
    
public:
    UScriptableToolLine();

    UFUNCTION(BlueprintCallable)
    void SetLineThickness(float Thickness);
    
    UFUNCTION(BlueprintCallable)
    void SetLineStart(FVector Start);
    
    UFUNCTION(BlueprintCallable)
    void SetLineEndPoints(FVector Start, FVector End);
    
    UFUNCTION(BlueprintCallable)
    void SetLineEnd(FVector End);
    
    UFUNCTION(BlueprintCallable)
    void SetLineDepthBias(float DepthBias);
    
    UFUNCTION(BlueprintCallable)
    void SetLineColor(FColor Color);
    
};

