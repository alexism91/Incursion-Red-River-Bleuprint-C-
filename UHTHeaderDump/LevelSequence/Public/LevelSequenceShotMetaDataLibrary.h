#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LevelSequenceShotMetaDataLibrary.generated.h"

class ULevelSequence;

UCLASS(Blueprintable, MinimalAPI)
class ULevelSequenceShotMetaDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelSequenceShotMetaDataLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetIsSubSequence(ULevelSequence* InLevelSequence, bool bInIsSubSequence);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsRecorded(ULevelSequence* InLevelSequence, bool bInIsRecorded);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsNoGood(ULevelSequence* InLevelSequence, bool bInIsNoGood);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsFlagged(ULevelSequence* InLevelSequence, bool bInIsFlagged);
    
    UFUNCTION(BlueprintCallable)
    static void SetFavoriteRating(ULevelSequence* InLevelSequence, int32 InFavoriteRating);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsSubSequenceByAssetData(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsSubSequence(const ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsRecordedByAssetData(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsRecorded(const ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsNoGoodByAssetData(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsNoGood(const ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsFlaggedByAssetData(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasIsFlagged(const ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasFavoriteRatingByAssetData(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasFavoriteRating(const ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsSubSequenceByAssetData(const FAssetData& InAssetData, bool& bOutIsSubSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetIsSubSequenceAssetTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsSubSequence(const ULevelSequence* InLevelSequence, bool& bOutIsSubSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsRecordedByAssetData(const FAssetData& InAssetData, bool& bOutIsRecorded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetIsRecordedAssetTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsRecorded(const ULevelSequence* InLevelSequence, bool& bOutIsRecorded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsNoGoodByAssetData(const FAssetData& InAssetData, bool& bOutNoGood);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetIsNoGoodAssetTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsNoGood(const ULevelSequence* InLevelSequence, bool& bOutNoGood);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsFlaggedByAssetData(const FAssetData& InAssetData, bool& bOutIsFlagged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetIsFlaggedAssetTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsFlagged(const ULevelSequence* InLevelSequence, bool& bOutIsFlagged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFavoriteRatingByAssetData(const FAssetData& InAssetData, int32& OutFavoriteRating);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFavoriteRatingAssetTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFavoriteRating(const ULevelSequence* InLevelSequence, int32& OutFavoriteRating);
    
    UFUNCTION(BlueprintCallable)
    static void ClearIsSubSequence(ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    static void ClearIsRecorded(ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    static void ClearIsNoGood(ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    static void ClearIsFlagged(ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    static void ClearFavoriteRating(ULevelSequence* InLevelSequence);
    
};

