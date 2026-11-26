#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EListItemAlignment -FallbackName=EListItemAlignment
#include "ESlateVisibility.h"
#include "ListView.h"
#include "TileView.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTileView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EListItemAlignment TileAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapHorizontalNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollbarDisabledVisibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntrySizeIncludesEntrySpacing;
    
public:
    UTileView();

    UFUNCTION(BlueprintCallable)
    void SetEntryWidth(float NewWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryHeight(float NewHeight);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsAligned() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntryWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEntryHeight() const;
    
};

