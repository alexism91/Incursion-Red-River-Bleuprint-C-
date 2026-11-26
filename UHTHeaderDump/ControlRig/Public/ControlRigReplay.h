#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ControlRigReplayTracks.h"
#include "EControlRigReplayPlaybackMode.h"
#include "ControlRigReplay.generated.h"

class UControlRig;
class UControlRigReplay;

UCLASS(Blueprintable, MinimalAPI)
class UControlRigReplay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ControlRigObjectPath;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PreviewSkeletalMeshObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigReplayTracks InputTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigReplayTracks OutputTracks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidateHierarchyTopology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidatePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidateMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidateVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FramesToSkip;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTest;
    
    UControlRigReplay();

    UFUNCTION(BlueprintCallable)
    bool StopReplay();
    
    UFUNCTION(BlueprintCallable)
    bool StopRecording();
    
    UFUNCTION(BlueprintCallable)
    bool StartReplay(UControlRig* InControlRig, EControlRigReplayPlaybackMode InMode);
    
    UFUNCTION(BlueprintCallable)
    bool StartRecording(UControlRig* InControlRig);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackMode(EControlRigReplayPlaybackMode InMode);
    
    UFUNCTION(BlueprintCallable)
    bool PauseReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTimeRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControlRigReplayPlaybackMode GetPlaybackMode() const;
    
    UFUNCTION(BlueprintCallable)
    static UControlRigReplay* CreateNewAsset(const FString& InDesiredPackagePath, const FString& InBlueprintPathName, UClass* InAssetClass);
    
};

