#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "IRRSettingDefinition.h"
#include "IRRSettingDescriptor.h"
#include "IRRSettingEditState.h"
#include "IRRSettingValue.h"
#include "IRRUserWidget.h"
#include "IRRBaseSettingBarWidget.generated.h"

class UIRRBaseSettingBarWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRBaseSettingBarWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSettingValueCommitted, UIRRBaseSettingBarWidget*, SettingBarWidgetRef, const FIRRSettingValue&, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetRequested, UIRRBaseSettingBarWidget*, SettingBarWidgetRef);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHovered, bool, bHovered, UIRRBaseSettingBarWidget*, SettingBarWidgetRef);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingDescriptor SettingDescriptor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHovered OnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingValueCommitted OnSettingValueCommitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetRequested OnResetRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingDefinition SettingDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowIndexInSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowCountInSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingEditState EditState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingValue DisplayedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifiedFromDefault;
    
    UIRRBaseSettingBarWidget();

    UFUNCTION(BlueprintCallable)
    void RequestReset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOptionSelectable(FName OptionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOptionIndex(const FIRRSettingValue& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplaySettingValue(const FIRRSettingValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void CommitSettingValue(const FIRRSettingValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void CommitOptionIndex(int32 OptionIndex);
    
    UFUNCTION(BlueprintCallable)
    void CommitOptionId(FName OptionId);
    
    UFUNCTION(BlueprintCallable)
    void CommitNumber(float Number);
    
    UFUNCTION(BlueprintCallable)
    void CommitKey(int32 BindingIndex, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void CommitColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplySettingDefinition(const FIRRSettingDefinition& Definition, int32 IndexInSection, int32 NumInSection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyModifiedState(bool bModified);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyEditState(const FIRRSettingEditState& State);
    
};

