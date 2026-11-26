#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkDynamicSequencePlaylist.generated.h"

class UAkDynamicSequencePlaylistItem;

UCLASS(Blueprintable, Transient)
class AKAUDIO_API UAkDynamicSequencePlaylist : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkDynamicSequencePlaylistItem*> Items;
    
    UAkDynamicSequencePlaylist();

    UFUNCTION(BlueprintCallable)
    void OverwriteAndCommit(TArray<UAkDynamicSequencePlaylistItem*> InItems);
    
    UFUNCTION(BlueprintCallable)
    void CommitWithoutChanges();
    
    UFUNCTION(BlueprintCallable)
    void Commit();
    
    UFUNCTION(BlueprintCallable)
    void AddAndCommit(UAkDynamicSequencePlaylistItem* Item);
    
};

