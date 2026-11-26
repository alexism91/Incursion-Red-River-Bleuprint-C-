#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieGraphValueContainer.h"
#include "MovieGraphMember.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphMember : public UMovieGraphValueContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditable;
    
public:
    UMovieGraphMember();

    UFUNCTION(BlueprintCallable)
    bool SetMemberName(const FString& InNewName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeletable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMemberName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRename(const FText& InNewName, FText& OutError) const;
    
};

