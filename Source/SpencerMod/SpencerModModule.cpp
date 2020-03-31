#include "SpencerModModule.h"
#include "SpencerActor.h"
#include "../SML/mod/hooking.h"
#include "FGGameMode.h"
#include <fstream>

void FExampleModModule::StartupModule() {
	SUBSCRIBE_METHOD("?InitGameState@AFGGameMode@@UEAAXXZ", AFGGameMode::InitGameState, [](auto& scope, AFGGameMode* gameMode) {
		ASpencerActor* actor = gameMode->GetWorld()->SpawnActor<ASpencerActor>(FVector::ZeroVector, FRotator::ZeroRotator);
		actor->DoStuff();
	});
}

IMPLEMENT_GAME_MODULE(FExampleModModule, ExampleMod);
