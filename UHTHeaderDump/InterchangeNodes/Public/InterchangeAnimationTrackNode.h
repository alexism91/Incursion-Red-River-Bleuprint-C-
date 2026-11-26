#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.h"
#include "EInterchangePropertyTracks.h"
#include "InterchangeAnimationPayLoadKey.h"
#include "InterchangeAnimationTrackBaseNode.h"
#include "InterchangeAnimationTrackNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomPropertyTrack(EInterchangePropertyTracks PropertyTrack);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationPayloadKey(const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomActorDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomPropertyTrack(EInterchangePropertyTracks& PropertyTrack) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFrameCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomActorDependencyUid(FString& DependencyUid) const;
    
};

