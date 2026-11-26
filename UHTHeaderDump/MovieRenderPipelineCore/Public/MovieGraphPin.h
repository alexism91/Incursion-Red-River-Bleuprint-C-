#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphPinProperties.h"
#include "MovieGraphPin.generated.h"

class UMovieGraphEdge;
class UMovieGraphNode;
class UMovieGraphPin;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphPin : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphNode* Node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphPinProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphEdge*> Edges;
    
    UMovieGraphPin();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTypeCompatibleWith(const UMovieGraphPin* InOtherPin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPinDirectionCompatibleWith(const UMovieGraphPin* OtherPin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutputPin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputPin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectionToBranchAllowed(const UMovieGraphPin* OtherPin, FText& OutError) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphPin* GetFirstConnectedPin(const bool bFollowRerouteConnections) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphNode*> GetConnectedNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphPin*> GetAllConnectedPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 EdgeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCreateConnection(const UMovieGraphPin* InOtherPin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowsMultipleConnections() const;
    
};

