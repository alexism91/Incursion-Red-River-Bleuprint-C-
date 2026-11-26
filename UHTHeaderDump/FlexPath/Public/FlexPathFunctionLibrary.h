#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace
#include "PathFollowingSettings.h"
#include "PathSmoothingSettings.h"
#include "FlexPathFunctionLibrary.generated.h"

class AAIController;
class UNavigationPath;
class UObject;

UCLASS(Blueprintable)
class FLEXPATH_API UFlexPathFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFlexPathFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TogglePathSmoothing(UObject* WorldContextObject, const AAIController* Controller, bool bEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> SmoothNavPath(UObject* WorldContextObject, const TArray<FVector>& PathPoints);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNavigationPath* SmoothNavigationPath(UObject* WorldContextObject, UNavigationPath* NavigationPath, const FPathSmoothingSettings& SmoothingSettings, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor SmoothedPathColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFlexPathSettings(UObject* WorldContextObject, const AAIController* Controller, const FPathSmoothingSettings& SmoothingSettings, const FPathFollowingSettings& FollowingSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFlexPathEnabled(UObject* WorldContextObject, const AAIController* Controller, bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPathSmoothingEnabled(UObject* WorldContextObject, const AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFlexPathEnabled(UObject* WorldContextObject, const AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawNavigationPath(UObject* WorldContextObject, UNavigationPath* NavigationPath, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor PathColor, float DrawTime);
    
};

