// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGActorRepresentationManager.h"

AFGActorRepresentationManager* AFGActorRepresentationManager::Get(UWorld* world){ return nullptr; }
AFGActorRepresentationManager* AFGActorRepresentationManager::Get(UObject* worldContext){ return nullptr; }
AFGActorRepresentationManager::AFGActorRepresentationManager(){ }
void AFGActorRepresentationManager::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGActorRepresentationManager::PreReplication(IRepChangedPropertyTracker& changedPropertyTracker){ }
bool AFGActorRepresentationManager::ReplicateSubobjects( UActorChannel* channel,  FOutBunch* bunch, FReplicationFlags* repFlags){ return bool(); }
bool AFGActorRepresentationManager::CreateAndAddNewRepresentation(AActor* realActor, bool isLocal){ return bool(); }
bool AFGActorRepresentationManager::UpdateRepresentation(AActor* realActor, bool isLocal){ return bool(); }
bool AFGActorRepresentationManager::CreateAndAddNewRepresentationNoActor(FVector location,  UTexture2D* compassTexture, FLinearColor compassColor, float lifeTime, bool shouldShowInCompass, bool shouldShowOnMap, ERepresentationType representationType , bool isLocal){ return bool(); }
bool AFGActorRepresentationManager::RemoveRepresentationOfActor(AActor* realActor){ return bool(); }
void AFGActorRepresentationManager::GetAllActorRepresentations(TArray<  UFGActorRepresentation* >& out_AllRepresentations){ }
void AFGActorRepresentationManager::DumpActorRepresentations(){ }
void AFGActorRepresentationManager::SetMapRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type, bool visible){ }
void AFGActorRepresentationManager::SetCompassRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type, bool visible){ }
bool AFGActorRepresentationManager::GetMapRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type){ return bool(); }
bool AFGActorRepresentationManager::GetCompassRepresentationTypeFilter( APawn* owningPlayerPawn, ERepresentationType type){ return bool(); }
void AFGActorRepresentationManager::SetCompassViewDistanceForActorRepresentation(UFGActorRepresentation* actorRepresentation, ECompassViewDistance viewDistance){ }
AActor* AFGActorRepresentationManager::GetRealActorFromActorRepresentation(UFGActorRepresentation* actorRepresentation){ return nullptr; }
float AFGActorRepresentationManager::GetDistanceValueFromCompassViewDistance(ECompassViewDistance compassViewDistance){ return float(); }
void AFGActorRepresentationManager::Tick(float dt){ }
void AFGActorRepresentationManager::OnRep_ReplicatedRepresentations(){ }
