#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "IRRFoliageVisionTestGameMode.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class TEST_C_API AIRRFoliageVisionTestGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObserverTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubjectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldBotFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeBotMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayDrawMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScanWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScanDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScanStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanLabelRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInstancesPerRefresh;
    
    AIRRFoliageVisionTestGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void FoliageTest_Scan(float Width, float Depth, float Step);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FoliageTest_Reset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FoliageTest_Rays(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FoliageTest_ObserverHere();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FoliageTest_ObserverDummy();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FoliageTest_ObserverBot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FoliageTest_ClearScan();
    
};

