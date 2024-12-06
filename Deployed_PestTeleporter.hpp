#ifndef UE4SS_SDK_Deployed_PestTeleporter_HPP
#define UE4SS_SDK_Deployed_PestTeleporter_HPP

class ADeployed_PestTeleporter_C : public ATraderDepositBox_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A20 (size: 0x8)
    class UChildActorComponent* Button_Spawn;                                         // 0x0A28 (size: 0x8)
    class USceneComponent* ButtonComponent;                                           // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* battery;                                              // 0x0A38 (size: 0x8)
    class UNiagaraComponent* TeleportFX;                                              // 0x0A40 (size: 0x8)
    class UPointLightComponent* TeleportLight;                                        // 0x0A48 (size: 0x8)
    int32 NPC Recipe Count;                                                           // 0x0A50 (size: 0x4)
    FTimerHandle OverlapTimer;                                                        // 0x0A58 (size: 0x8)
    TSubclassOf<class ANPC_Base_ParentBP_C> NPCClass;                                 // 0x0A60 (size: 0x8)

    FText GetItemNameText();
    void Add Item Into Trade Container(class AActor* Item, int32 Index, int32 Stack);
    void OnRep_NPC Recipe Count();
    void OnLoaded_31F85831468D7476047EC585CD93EF1B(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ProducedItemFX();
    void TogglePowerFX();
    void UpdateChargeLevel();
    void Spawn_NPC(bool Activated);
    void RefreshScreen();
    void OnLoadedFromSave();
    void ExecuteUbergraph_Deployed_PestTeleporter(int32 EntryPoint);
}; // Size: 0xA68

#endif
