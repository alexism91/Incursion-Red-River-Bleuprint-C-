#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ContentWidget.h"
#include "Templates/SubclassOf.h"
#include "Viewport.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class UViewport : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UViewport();

    UFUNCTION(BlueprintCallable)
    AActor* Spawn(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetViewRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetViewLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyIntensity(float LightIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFlag(const FString& InShowFlagName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightIntensity(float LightIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAdvancedFeatures(bool InEnableAdvancedFeatures);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMatrix GetViewProjectionMatrix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetViewportWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetViewLocation() const;
    
};

