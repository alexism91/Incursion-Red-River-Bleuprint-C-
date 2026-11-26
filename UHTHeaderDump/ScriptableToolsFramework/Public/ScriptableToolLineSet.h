#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptableToolLineSet.generated.h"

class ULineSetComponent;
class UPreviewGeometry;
class UScriptableToolLine;

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolLineSet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* ToolDrawableGeometry;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULineSetComponent* LineSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolLine*> LineComponents;
    
public:
    UScriptableToolLineSet();

    UFUNCTION(BlueprintCallable)
    void SetAllLinesThickness(float Thickness);
    
    UFUNCTION(BlueprintCallable)
    void SetAllLinesColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLine(UScriptableToolLine* Line);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllLines();
    
    UFUNCTION(BlueprintCallable)
    UScriptableToolLine* AddLine();
    
};

