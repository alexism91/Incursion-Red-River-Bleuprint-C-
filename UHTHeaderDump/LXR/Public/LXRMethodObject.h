#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LXRSense.h"
#include "LXRSilhouette.h"
#include "LXRSource.h"
#include "LXRMethodObject.generated.h"

class AActor;
class ULXRLightSenseComponent;
class ULXRSilhouetteDetectionComponent;
class ULXRSourceComponent;

UCLASS(Blueprintable)
class LXR_API ULXRMethodObject : public UObject, public ILXRSource, public ILXRSense, public ILXRSilhouette {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRSourceComponent* SourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRLightSenseComponent* SenseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRSilhouetteDetectionComponent* SilhouetteDetectionComponent;
    
public:
    ULXRMethodObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULXRSourceComponent* GetSourceComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULXRSilhouetteDetectionComponent* GetSilhouetteComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULXRLightSenseComponent* GetLightSenseComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

