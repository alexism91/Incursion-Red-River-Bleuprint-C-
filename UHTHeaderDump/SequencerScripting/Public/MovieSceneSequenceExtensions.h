#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneEvaluationType -FallbackName=EMovieSceneEvaluationType
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneTimeUnit -FallbackName=EMovieSceneTimeUnit
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EUpdateClockSource -FallbackName=EUpdateClockSource
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingProxy -FallbackName=MovieSceneBindingProxy
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneMarkedFrame -FallbackName=MovieSceneMarkedFrame
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "SequencerScriptingRange.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneSequenceExtensions.generated.h"

class UMovieScene;
class UMovieSceneFolder;
class UMovieSceneSequence;
class UMovieSceneTrack;
class UObject;

UCLASS(Blueprintable)
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneSequenceExtensions();

    UFUNCTION(BlueprintCallable)
    static void SortMarkedFrames(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorkRangeStart(UMovieSceneSequence* InSequence, double StartTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorkRangeEnd(UMovieSceneSequence* InSequence, double EndTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewRangeStart(UMovieSceneSequence* InSequence, double StartTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewRangeEnd(UMovieSceneSequence* InSequence, double EndTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetTickResolutionDirectly(UMovieSceneSequence* Sequence, FFrameRate TickResolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetTickResolution(UMovieSceneSequence* Sequence, FFrameRate TickResolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetReadOnly(UMovieSceneSequence* Sequence, bool bInReadOnly);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaybackStartSeconds(UMovieSceneSequence* Sequence, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaybackStart(UMovieSceneSequence* Sequence, int32 StartFrame);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaybackRangeLocked(UMovieSceneSequence* Sequence, bool bInLocked);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaybackEndSeconds(UMovieSceneSequence* Sequence, float EndTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaybackEnd(UMovieSceneSequence* Sequence, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable)
    static void SetMarkedFramesLocked(UMovieSceneSequence* Sequence, bool bInLocked);
    
    UFUNCTION(BlueprintCallable)
    static void SetMarkedFrameInSequence(UMovieSceneSequence* Sequence, int32 InMarkIndex, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    static void SetMarkedFrame(UMovieSceneSequence* Sequence, int32 InMarkIndex, FFrameNumber InFrameNumber);
    
    UFUNCTION(BlueprintCallable)
    static void SetEvaluationType(UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayRate(UMovieSceneSequence* Sequence, FFrameRate DisplayRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetClockSource(UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneBindingProxy ResolveBindingID(UMovieSceneSequence* RootSequence, FMovieSceneObjectBindingID InObjectBindingID);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveTrack(UMovieSceneSequence* Sequence, UMovieSceneTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRootFolderFromSequence(UMovieSceneSequence* Sequence, UMovieSceneFolder* Folder);
    
    UFUNCTION(BlueprintCallable)
    static FSequencerScriptingRange MakeRangeSeconds(UMovieSceneSequence* Sequence, float StartTime, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static FSequencerScriptingRange MakeRange(UMovieSceneSequence* Sequence, int32 StartFrame, int32 Duration);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> LocateBoundObjects(UMovieSceneSequence* Sequence, const FMovieSceneBindingProxy& InBinding, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReadOnly(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaybackRangeLocked(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintPure)
    static double GetWorkRangeStart(UMovieSceneSequence* InSequence);
    
    UFUNCTION(BlueprintPure)
    static double GetWorkRangeEnd(UMovieSceneSequence* InSequence);
    
    UFUNCTION(BlueprintPure)
    static double GetViewRangeStart(UMovieSceneSequence* InSequence);
    
    UFUNCTION(BlueprintPure)
    static double GetViewRangeEnd(UMovieSceneSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> GetTracks(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static FFrameRate GetTickResolution(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMovieSceneBindingProxy> GetSpawnables(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UMovieSceneFolder*> GetRootFoldersInSequence(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMovieSceneBindingProxy> GetPossessables(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetPortableBindingID(UMovieSceneSequence* RootSequence, UMovieSceneSequence* DestinationSequence, const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlaybackStartSeconds(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlaybackStart(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static FSequencerScriptingRange GetPlaybackRange(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlaybackEndSeconds(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlaybackEnd(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static UMovieScene* GetMovieScene(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMovieSceneMarkedFrame> GetMarkedFramesFromSequence(UMovieSceneSequence* Sequence, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMovieSceneMarkedFrame> GetMarkedFrames(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMovieSceneEvaluationType GetEvaluationType(UMovieSceneSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    static FFrameRate GetDisplayRate(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUpdateClockSource GetClockSource(UMovieSceneSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMovieSceneBindingProxy> GetBindings(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetBindingID(UMovieSceneSequence* Sequence, const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> FindTracksByType(UMovieSceneSequence* Sequence, TSubclassOf<UMovieSceneTrack> TrackType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> FindTracksByExactType(UMovieSceneSequence* Sequence, TSubclassOf<UMovieSceneTrack> TrackType);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindNextMarkedFrameInSequence(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindNextMarkedFrame(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindMarkedFrameByLabel(UMovieSceneSequence* Sequence, const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindMarkedFrameByFrameNumberInSequence(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindMarkedFrameByFrameNumber(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneBindingProxy FindBindingByName(UMovieSceneSequence* Sequence, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneBindingProxy FindBindingById(UMovieSceneSequence* Sequence, FGuid BindingID);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteMarkedFrames(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteMarkedFrame(UMovieSceneSequence* Sequence, int32 DeleteIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool AreMarkedFramesLocked(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneTrack* AddTrack(UMovieSceneSequence* Sequence, TSubclassOf<UMovieSceneTrack> TrackType);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneBindingProxy AddSpawnableFromInstance(UMovieSceneSequence* Sequence, UObject* ObjectToSpawn);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneBindingProxy AddSpawnableFromClass(UMovieSceneSequence* Sequence, UClass* ClassToSpawn);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneFolder* AddRootFolderToSequence(UMovieSceneSequence* Sequence, const FString& NewFolderName);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneBindingProxy AddPossessable(UMovieSceneSequence* Sequence, UObject* ObjectToPossess);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddMarkedFrameToSequence(UMovieSceneSequence* Sequence, const FMovieSceneMarkedFrame& InMarkedFrame, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddMarkedFrame(UMovieSceneSequence* Sequence, const FMovieSceneMarkedFrame& InMarkedFrame);
    
};

