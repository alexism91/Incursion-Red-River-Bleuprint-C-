#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ULXRDebugEntry.generated.h"

class AActor;
class UBorder;
class ULXRDebugEntryObject;
class UTextBlock;
class UULXRDebugFeature;
class UULXRDebugFeatureContainer;

UCLASS(Blueprintable, EditInlineNew)
class LXR_API UULXRDebugEntry : public UUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* txtActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BorderSeenBySilhouetteLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BorderSeenBySilhouetteRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugFeature* SocketDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugFeatureContainer* DetectionDebugs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugFeature* CaptureDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULXRDebugEntryObject* MyEntryObject;
    
    UULXRDebugEntry();

    UFUNCTION(BlueprintCallable)
    void SeenBySilhouette(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetMyDebugColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMyDebugActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EntryReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomTick();
    

    // Fix for true pure virtual functions not being implemented
};

