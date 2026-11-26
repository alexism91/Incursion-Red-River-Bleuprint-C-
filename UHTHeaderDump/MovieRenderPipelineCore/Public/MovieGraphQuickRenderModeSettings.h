#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieGraphQuickRenderFrameRangeType.h"
#include "EMovieGraphQuickRenderPostRenderActionType.h"
#include "MovieGraphQuickRenderModeSettings.generated.h"

class ULevelSequence;
class UMovieGraphConfig;
class UMovieGraphQuickRenderModeSettings;
class UMovieJobVariableAssignmentContainer;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphQuickRenderModeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMovieGraphConfig> GraphPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphQuickRenderPostRenderActionType PostRenderBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride_ViewportLookFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewportLookFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphQuickRenderFrameRangeType FrameRangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieJobVariableAssignmentContainer*> GraphVariableAssignments;
    
    UMovieGraphQuickRenderModeSettings();

    UFUNCTION(BlueprintCallable)
    static void RefreshVariableAssignments(UMovieGraphQuickRenderModeSettings* InSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieJobVariableAssignmentContainer* GetVariableAssignmentsForGraph(const TSoftObjectPtr<UMovieGraphConfig>& InGraphConfigPath) const;
    
};

