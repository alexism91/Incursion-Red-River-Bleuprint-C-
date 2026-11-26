#include "RecastNavMesh.h"
#include "ERuntimeGenerationType.h"
#include "Templates/SubclassOf.h"

ARecastNavMesh::ARecastNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RuntimeGeneration = ERuntimeGenerationType::DynamicModifiersOnly;
    this->bDrawTriangleEdges = false;
    this->bDrawPolyEdges = false;
    this->bDrawFilledPolys = true;
    this->bDrawNavMeshEdges = true;
    this->bDrawTileBounds = false;
    this->bDrawTileResolutions = false;
    this->bDrawPathCollidingGeometry = false;
    this->bDrawTileLabels = false;
    this->bDrawTileBuildTimes = false;
    this->bDrawTileBuildTimesHeatMap = false;
    this->bDrawPolygonLabels = false;
    this->bDrawDefaultPolygonCost = false;
    this->bDrawPolygonFlags = false;
    this->bDrawLabelsOnPathNodes = false;
    this->bDrawNavLinks = true;
    this->bDrawFailedNavLinks = false;
    this->bDrawClusters = false;
    this->bDrawOctree = false;
    this->bDrawOctreeDetails = true;
    this->bDrawMarkedForbiddenPolys = false;
    this->bDistinctlyDrawTilesBeingBuilt = true;
    this->DrawOffset = 10.00f;
    this->bFixedTilePoolSize = true;
    this->TilePoolSize = 200000;
    this->TileSizeUU = 1000.00f;
    this->CellSize = 19.00f;
    this->CellHeight = 10.00f;
    this->AgentMaxStepHeight = 35.00f;
    this->AgentRadius = 25.00f;
    this->AgentHeight = 180.00f;
    this->AgentMaxSlope = 44.00f;
    this->MinRegionArea = 0.00f;
    this->MergeRegionSize = 400.00f;
    this->MaxVerticalMergeError = 2147483647;
    this->MaxSimplificationError = 1.30f;
    this->SimplificationElevationRatio = 0.00f;
    this->MaxSimultaneousTileGenerationJobsCount = 1024;
    this->TileNumberHardLimit = 1048576;
    this->ExpectedMaxLayersPerTile = 12;
    this->PolyRefTileBits = 20;
    this->PolyRefNavPolyBits = 32;
    this->PolyRefSaltBits = 12;
    this->DefaultDrawDistance = 5000.00f;
    this->DefaultMaxSearchNodes = 2048.00f;
    this->DefaultMaxHierarchicalSearchNodes = 2048.00f;
    this->LedgeSlopeFilterMode = ENavigationLedgeSlopeFilterMode::Recast;
    this->RegionPartitioning = ERecastPartitioning::Watershed;
    this->LayerPartitioning = ERecastPartitioning::Watershed;
    this->RegionChunkSplits = 2;
    this->LayerChunkSplits = 2;
    this->bSortNavigationAreasByCost = true;
    this->bIsWorldPartitioned = false;
    this->bGenerateNavLinks = false;
    this->bPerformVoxelFiltering = true;
    this->bMarkLowHeightAreas = false;
    this->bUseExtraTopCellWhenMarkingAreas = true;
    this->bFilterLowSpanSequences = false;
    this->bFilterLowSpanFromTileCache = false;
    this->bDoFullyAsyncNavDataGathering = true;
    this->bUseBetterOffsetsFromCorners = true;
    this->bStoreEmptyTileLayers = false;
    this->bUseVirtualFilters = true;
    this->bUseVirtualGeometryFilteringAndDirtying = false;
    this->bAllowNavLinkAsPathEnd = false;
    this->TimeSliceFilterLedgeSpansMaxYProcess = 13;
    this->TimeSliceLongDurationDebug = 0.00f;
    this->InvokerTilePriorityBumpDistanceThresholdInTileUnits = 1;
    this->InvokerTilePriorityBumpIncrease = 1;
    this->bUseVoxelCache = false;
    this->TileSetUpdateInterval = 1.00f;
    this->HeuristicScale = 1.00f;
    this->VerticalDeviationFromGroundCompensation = 0.00f;
}

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea, bool ReplaceLinks) {
    return false;
}


