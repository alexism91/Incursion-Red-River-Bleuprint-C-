#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=NameSpacedUserData -FallbackName=NameSpacedUserData
#include "ControlRigShapeLibraryLink.generated.h"

class UControlRigShapeLibrary;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UControlRigShapeLibraryLink : public UNameSpacedUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UControlRigShapeLibrary> ShapeLibrary;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ShapeNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlRigShapeLibrary* ShapeLibraryCached;
    
public:
    UControlRigShapeLibraryLink();

    UFUNCTION(BlueprintCallable)
    void SetShapeLibrary(TSoftObjectPtr<UControlRigShapeLibrary> InShapeLibrary);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UControlRigShapeLibrary> GetShapeLibrary() const;
    
};

