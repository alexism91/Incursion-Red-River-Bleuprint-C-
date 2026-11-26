#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "Cover.h"
#include "CoverBuildParams.h"
#include "CoverData.h"
#include "CoverHandle.h"
#include "CoverNavMapPatchedDelegate.h"
#include "CoverNavMapUpdatedDelegate.h"
#include "CoverSystem.generated.h"

class ACoverSystem;
class ANavigationData;
class UObject;

UCLASS(Blueprintable, NoExport)
class AICOVERSYSTEM_API ACoverSystem : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverNavMapUpdated OnCoverNavMapUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverNavMapPatched OnCoverNavMapPatched;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseStaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPromptWhenCoverDataOutdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOnNavigationRebuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAsyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomBuildParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverBuildParams BuildParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OctreeExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawOctreeBounds;
    
public:
    ACoverSystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RebaseOrigin(const FVector& NewOrigin, bool bRegenerate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavigationGenerationFinished(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncWorkerRunning() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ACoverSystem* GetCoverSystem(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoversWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCoverHandle>& OutCoverHandles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoverDataWithinBounds(const FBoxSphereBounds& InBounds, TArray<FCover>& OutCovers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCoverData(const FCoverHandle& CoverHandle, FCoverData& OutData) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateCovers(bool bForceRegenerate, bool bAsync, bool bDeferGenerationIfBusy);
    
};

