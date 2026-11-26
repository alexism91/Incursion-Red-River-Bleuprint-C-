#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ContentWidget -FallbackName=ContentWidget
#include "IRRFloatingBox.generated.h"

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRFloatingBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Anchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UIRRFloatingBox();

    UFUNCTION(BlueprintCallable)
    void SetOffset(FVector2D InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchor(FVector2D InAnchor);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignment(FVector2D InAlignment);
    
};

