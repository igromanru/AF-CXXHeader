#ifndef UE4SS_SDK_BlastDoor_DarkwaterCave_HPP
#define UE4SS_SDK_BlastDoor_DarkwaterCave_HPP

class ABlastDoor_DarkwaterCave_C : public ABlastDoor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UAudioComponent* ExtraDrainAudio;                                           // 0x0390 (size: 0x8)

    void UserConstructionScript();
    void DoorTimeline();
    void ExecuteUbergraph_BlastDoor_DarkwaterCave(int32 EntryPoint);
}; // Size: 0x398

#endif
